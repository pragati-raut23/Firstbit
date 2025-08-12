package com.CaseStudy3.phoenixes;

import java.util.Comparator;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;
import java.util.List;
import java.util.stream.Collectors;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.time.LocalDate;
import java.io.File;
import java.io.FileNotFoundException;

public class CoinOperations {

	String country;
	String denomination;
	int yearOfMinting;
	double currentValue;
	String aquiredDate;
	LocalDate ad;
	int choice,coinId,count,max;
	
	Scanner scs=new Scanner(System.in);
	
	List<Coin> coin=new ArrayList<>();
	List<String> data=new ArrayList<>();
	
	public void addDataBase() {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/coin", "root", "pragati@23*");
			String query="select * from coin";
			Statement stmt=con.createStatement();
			ResultSet cn=stmt.executeQuery(query);
			while(cn.next()) {
				coinId=cn.getInt(1);
				country=cn.getString(2);
				denomination=cn.getString(3);
				yearOfMinting=cn.getInt(4);
				currentValue = cn.getDouble(5);
				//aquiredDate=cn.getDate(6).toString();
				ad=LocalDate.parse(cn.getDate(6).toString());
				coin.add(new Coin(coinId,country,denomination,yearOfMinting,currentValue,ad));
				data.add("UC");
			}
			String q="select max(coinId) from coin";
			Statement st=con.createStatement();
			ResultSet ci=stmt.executeQuery(q);
			ci.next();
			count=ci.getInt(1);
			max=count;
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public void add() {
		try {
			System.out.println("\nEnter your choice:\n1.add single coin data\n2.add bulk data\n");
			choice=scs.nextInt();
			if(choice<1 || choice>2) {
				throw new InvalidChoiceException("Invalid choice!");
			}
			switch(choice) {
			case 1:
				addCoin();
				break;
			case 2:
				addBulkCoin();
				break;
			}
		}
		catch(InvalidChoiceException e) {
			e.printStackTrace();
		}
	}
	public void addCoin() {
		coinId=++count;
		System.out.println("enter country of the coin: ");
		scs.nextLine(); 
		country=scs.nextLine();
		System.out.println("enter denomination of the coin: ");
		denomination=scs.nextLine();
		System.out.println("enter year of minting of the coin: ");
		yearOfMinting=scs.nextInt();
		System.out.println("enter current value of the coin: ");
		currentValue=scs.nextDouble();
		System.out.println("enter date of aquired of the coin(yyyy-mm-dd): ");
		scs.nextLine();
		aquiredDate=scs.nextLine();
		ad=LocalDate.parse(aquiredDate);
		coin.add(new Coin(coinId,country,denomination,yearOfMinting,currentValue,ad));
		data.add("INS");
	}
	
	public void addBulkCoin() {
	//	String fileName;
    //	System.out.println("Enter file name: ");
   //	fileName=scs.next();
		 
		//BufferedReader br;
		try {
				Scanner sc=new Scanner(new File("coin.csv"));
				while (sc.hasNext())   //returns a Boolean value  
				{  
					String line = sc.nextLine();  
					String[] cn = line.split(",");    // use comma as separator  
					//System.out.println(x);
					coinId=++count;
					country=cn[0];
					denomination=cn[1];
					String y=cn[2];
					yearOfMinting=Integer.parseInt(y);
					currentValue = Double.parseDouble(cn[3]);
					ad=LocalDate.parse(cn[4]);
					coin.add(new Coin(coinId,country,denomination,yearOfMinting,currentValue,ad));
					data.add("INS");
				}
		}catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}  
	}
	
	public void displayCoin() {
		  try { 
			  Iterator<Coin> itr=coin.iterator();
			  System.out.println("*** Coin Collection ***");
			  System.out.println("coin id\t\tcountry \t\t denomination \t\t year_of_minting \t\t current_value \t\t acquired_date");
			  while(itr.hasNext()) {
				  System.out.println(itr.next());
			  } 
		  } catch (NullPointerException e) { 
			  System.out.println("There is no coin in collection!"); 
		  }
	}
	
	public void searchCoin() {
		try {
			System.out.println("\nEnter your choice:\n1.search coin by country name\n2.search coin by year of minting\n3.search by country name and denomination"
					+ "\n4.search by country name and year of minting\n5.search by country name,denomination and year of minting\n6.search by acquired date and country\n");
			choice=scs.nextInt();
			if(choice<1 || choice>6) {
				throw new InvalidChoiceException("Invalid choice!");
			}
			switch(choice) {
			case 1:
				searchByCountry();
				break;
			case 2:
				searchByYearOfMinting();
				break;
			case 3:
				searchByCountryNdDenomination();
				break;
			case 4:
				searchByCountryNdYearOfMinting();
				break;
			case 5:
				searchByCountryNdDenominationNdYearOfMinting();
				break;
			case 6:
				searchByAcquiredDateNdCountry();
				break;
			}
		}
		catch(InvalidChoiceException e) {
			e.printStackTrace();
		}
	}
	
	public void searchByCountry() {
		
		 System.out.println("Enter countrey name: "); 
		 scs.nextLine();
		 country=scs.nextLine(); 
		 List<Coin> cn=coin.stream().filter(ref->ref.getCountry().equals(country)).collect(Collectors.toList());
		 if(cn.isEmpty()) {
			 System.out.println("No data found!");
		 }
		 else {
			 for(Coin c:cn) {
				 System.out.println(c);
			 }
		 }
	}
	
	public void searchByYearOfMinting() {
		System.out.println("enter year of minting: ");
		yearOfMinting=scs.nextInt();
		try { 
			Iterator<Coin> itr=coin.iterator();
			while(itr.hasNext()) { 
				Coin c=itr.next();
				if(c.getYearOfMinting()==yearOfMinting) { 
					c.display(); 
				}
			} 
		} catch(NullPointerException e) { 
			// TODO Auto-generated catch block }
			System.out.println("There is no coin in collection!");
		}
	}
	
	public void searchByCountryNdDenomination() {
		System.out.println("Enter countrey name: "); 
		scs.nextLine();
		country=scs.nextLine(); 
		System.out.println("Enter denomination: "); 
		denomination=scs.nextLine(); 
		try { 
				Iterator<Coin> itr=coin.iterator();
				while(itr.hasNext()) { 
					Coin c=itr.next();
					if(c.getCountry().contains(country)&&c.getDenomination().contains(denomination)) { 
						c.display(); 
					}
				} 
			} catch(NullPointerException e) { 
				// TODO Auto-generated catch block }
				System.out.println("There is no coin in collection!");
			}
	}
	
	public void searchByCountryNdYearOfMinting() {
		System.out.println("Enter countrey name: "); 
		scs.nextLine();
		country=scs.nextLine(); 
		System.out.println("enter year of minting: ");
		yearOfMinting=scs.nextInt();
		  try { 
				Iterator<Coin> itr=coin.iterator();
				while(itr.hasNext()) { 
					Coin c=itr.next();
					if(c.getCountry().contains(country)&&c.getYearOfMinting()==yearOfMinting) { 
						c.display(); 
					}
				} 
			} catch(NullPointerException e) { 
				// TODO Auto-generated catch block }
				System.out.println("There is no coin in collection!");
			}
	}
	
	public void searchByCountryNdDenominationNdYearOfMinting() {
		System.out.println("Enter countrey name: "); 
		scs.nextLine();
		country=scs.nextLine(); 
		System.out.println("Enter denomination: "); 
		denomination=scs.nextLine(); 
		System.out.println("enter year of minting: ");
		yearOfMinting=scs.nextInt();
		  try { 
				Iterator<Coin> itr=coin.iterator();
				while(itr.hasNext()) { 
					Coin c=itr.next();
					if(c.getCountry().contains(country)&&c.getDenomination().contains(denomination)&&c.getYearOfMinting()==yearOfMinting) { 
						System.out.println(c); 
					}
				} 
			} catch(NullPointerException e) { 
				// TODO Auto-generated catch block }
				System.out.println("There is no coin in collection!");
			}
	}
	
	public void searchByAcquiredDateNdCountry() {
		System.out.println("Enter countrey name: "); 
		scs.nextLine();
		country=scs.nextLine(); 
		System.out.println("enter aquired date(yyyy-mm-dd): ");
		aquiredDate=scs.next();
		ad=LocalDate.parse(aquiredDate);
		  try { 
				Iterator<Coin> itr=coin.iterator();
				while(itr.hasNext()) { 
					Coin c=itr.next();
					
					  if(c.getCountry().contains(country)&&c.getAquiredDate()==ad) { 
						  c.display();
					  } 
				} 
			} catch(NullPointerException e) { 
				// TODO Auto-generated catch block }
				System.out.println("There is no coin in collection!");
			}
	}
	
	public void sortByCurrentValue() {
		List<Coin> cn=coin.stream().sorted(Comparator.
				comparingDouble(Coin::getCurrentValue))
				.collect(Collectors.toList());
		if(cn.isEmpty()) {
			 System.out.println("No data found!");
		 }
		 else {
			 for(Coin c:cn) {
				 System.out.println(c);
			 }
		 }
	}
	
	public int search(int coinId) {
		int index=-1;
		for(int ctr=0;ctr<coin.size();ctr++) {
			if(coin.get(ctr).getCoinId()==coinId) {
				index=ctr;
				return index;
			}
		}
		return index;
	}
	public void deleteCoin() {
		displayCoin();
		System.out.println("enter coin id you want to delete: ");
		coinId=scs.nextInt();
		int index=search(coinId);
			if(index!=-1) {
				if(data.get(index)=="INS") {
					coin.remove(index);
					data.remove(index);
				}	
				
				data.set(index, "DEL");
			}
			else {
				System.out.println("Coin id not found!");
			}
	}
	
	public void updateCoin() {
		int choice=-1;
		displayCoin();
		System.out.println("enter coin id you want to update: ");
		coinId=scs.nextInt();
		int index=search(coinId);
		if(index!=-1) {
			do {
				try {
					System.out.println("What do you want to update:\n1.country\n2.denomination\n3.year of minting\n4.current value\5.aquired date\n0.to exit\n");
					choice=scs.nextInt();
					if(choice<0 || choice>5) {
						throw new InvalidChoiceException("Invalid choice!");
					}
					switch(choice) {
					case 1:
						System.out.println("Enter countrey name: "); 
						country=scs.nextLine();
						coin.get(index).setCountry(country);
						break;
					case 2:
						System.out.println("Enter denomination: ");
						scs.nextLine();
						denomination=scs.nextLine();
						coin.get(index).setDenomination(denomination);
						break;
					case 3:
						System.out.println("Enter minting year: ");
						yearOfMinting=scs.nextInt();
						coin.get(index).setYearOfMinting(yearOfMinting);
						break;
					case 4:
						System.out.println("Enter current value: ");
						currentValue=scs.nextDouble();
						coin.get(index).setCurrentValue(currentValue);
						break;
					case 5:
						System.out.println("enter aquired date(yyyy-mm-dd): ");
						aquiredDate=scs.next();
						ad=LocalDate.parse(aquiredDate);
						coin.get(index).setAquiredDate(ad);
						break;
					case 0:
						break;
					}
				}
				catch(InvalidChoiceException e) {
					e.printStackTrace();
				}
			}while(choice!=0);
			if(coinId<=max) {
				data.set(index, "UP");
			}
		}
		else {
			System.out.println("Coin id not found!");
		}
	}
	
	public void toDataBase() {
		String query;
		PreparedStatement ps;
		int rs;
		java.sql.Date sqd;
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/coin", "root", "Pragati@23*");
			
			for(int ctr=0;ctr<data.size();ctr++) {
				String ch=data.get(ctr);
				if(ch!="UC"||ch!="UP"||ch!="INS") {
					throw new InvalidStatusException("Invalid Status!");
				}
				switch(ch) {
				case "UC":
					System.out.println("Data already exist");
					break;
				case "DEL":
						query="delete from coin where coinId=?";
						ps=con.prepareStatement(query);
						ps.setInt(1,coin.get(ctr).getCoinId());
						rs=ps.executeUpdate();
					break;
				case "UP":
					query="update coin set country=?,denomination=?,yearOfMinting=?,currentValue=?,aquiredDate=? where coinId=?";
					ps=con.prepareStatement(query);
					ps.setString(1,coin.get(ctr).getCountry());
					ps.setString(2,coin.get(ctr).getDenomination());
					ps.setInt(3,coin.get(ctr).getYearOfMinting());
					ps.setDouble(4,coin.get(ctr).getCurrentValue());
					sqd=java.sql.Date.valueOf(coin.get(ctr).getAquiredDate());
					ps.setDate(5, sqd);
					ps.setInt(6,coin.get(ctr).getCoinId());
					rs=ps.executeUpdate();
					break;
				case "INS":
					query="insert into coin values(?,?,?,?,?,?)";
					ps=con.prepareStatement(query);
					ps.setInt(1,coin.get(ctr).getCoinId());
					ps.setString(2,coin.get(ctr).getCountry());
					ps.setString(3,coin.get(ctr).getDenomination());
					ps.setInt(4,coin.get(ctr).getYearOfMinting());
					ps.setDouble(5,coin.get(ctr).getCurrentValue());
					sqd=java.sql.Date.valueOf(coin.get(ctr).getAquiredDate());
					ps.setDate(6, sqd);
					rs=ps.executeUpdate();
					break;
				default:
					System.out.println("Unauthorised access!");
				}
				
			}
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		} catch(InvalidStatusException e) {
			e.printStackTrace();
		}
	}
}
