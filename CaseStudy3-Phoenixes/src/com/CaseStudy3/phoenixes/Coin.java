package com.CaseStudy3.phoenixes;

import java.time.LocalDate;

public class Coin {

	int coinId;
	String country;
	String denomination;
	int yearOfMinting;
	double currentValue;
	LocalDate aquiredDate;
	
	public Coin() {
		
	}

	public Coin(int coinId,String country, String denomination, int yearOfMinting, double currentValue, LocalDate aquiredDate) {
		super();
		this.coinId=coinId;
		this.country = country;
		this.denomination = denomination;
		this.yearOfMinting = yearOfMinting;
		this.currentValue = currentValue;
		this.aquiredDate = aquiredDate;
	}

	public int getCoinId() {
		return coinId;
	}

	public void setCoinId(int coinId) {
		this.coinId = coinId;
	}

	public String getCountry() {
		return country;
	}

	public void setCountry(String country) {
		this.country = country;
	}

	public String getDenomination() {
		return denomination;
	}

	public void setDenomination(String denomination) {
		this.denomination = denomination;
	}

	public int getYearOfMinting() {
		return yearOfMinting;
	}

	public void setYearOfMinting(int yearOfMinting) {
		this.yearOfMinting = yearOfMinting;
	}

	public double getCurrentValue() {
		return currentValue;
	}

	public void setCurrentValue(double currentValue) {
		this.currentValue = currentValue;
	}

	public LocalDate getAquiredDate() {
		return aquiredDate;
	}

	public void setAquiredDate(LocalDate aquiredDate) {
		this.aquiredDate = aquiredDate;
	}
	
	public void display() {
		System.out.println("Countrey name: "+this.country+"\tDenomination: "+this.denomination+"\tYear of minting: "+this.yearOfMinting+
				"\nCurrent value: "+this.currentValue+"\tAcquired date: "+this.aquiredDate+"\n");
	}

	@Override
	public boolean equals(Object obj) {
		Coin cn=(Coin) obj;
		if(this.denomination.equals(cn.denomination)&&this.currentValue==cn.currentValue&&this.yearOfMinting==cn.yearOfMinting) {
			return false;
		}
		else {
			return true;
		}
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return ""+this.coinId+" \t "+this.country+"  \t\t\t"+this.denomination+"  \t\t\t"+this.yearOfMinting+
				"\t\t\t"+this.currentValue+"\t\t\t"+this.aquiredDate+"\n";
	}
	
}
