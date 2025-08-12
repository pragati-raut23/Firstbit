package com.project.alpha;

import java.time.LocalTime;
import java.time.temporal.ChronoUnit;

public class AC implements Control {

	float temp;
	Boolean status;
	float time;
	LocalTime onTime;
	LocalTime offTime;

	public AC() {
		this.status=false;
		this.temp=0;
	}

	public float getTemp() {
		return temp;
	}


	public void setTemp(float temp) {
		this.temp = temp;
	}

	public Boolean getStatus() {
		return status;
	}

	public void setStatus(Boolean status) {
		this.status = status;
	}

	public float getTime() {
		if(onTime!=null&&offTime!=null) {
			this.time=(float) this.onTime.until(this.offTime, ChronoUnit.MINUTES);
			return time;
		}
		return 0.0f;	
	}

	public void setTime(float time) {
		this.time = time;
	}
	
	public Boolean isOn() {
		if(this.status==true) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public Boolean isOff() {
		if(this.status==false) {
			return true;
		}
		else {
			return false;
		}
	}
	
	@Override
	public void onAppliance() {
		if(isOn()) {
			System.out.println("\nDevice is already ON!\n");
		}
		else {
			this.status=true;
			this.onTime=LocalTime.now();
			System.out.println("\nDevice turned On\n");
		}
	}

	@Override
	public void offAppliance() {
		if(isOn()) {
			System.out.println("\nDevice is Already ON!\n");
		}
		else {
			this.status=false;
			this.offTime=LocalTime.now();
			System.out.println("\nDevice turned Off\n");
		}
	}

	@Override
	public void tempUp() {
		this.setTemp(this.getTemp()+1);
		System.out.println("\nTemp: "+this.getTemp()+"\n");
	}

	@Override
	public void tempDown() {
		this.setTemp(this.getTemp()-1);
		System.out.println("\nTemp: "+this.getTemp()+"\n");
	}
}
