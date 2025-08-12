package com.dictionary;
import java.util.*;

public class MainApp {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		String search;
		
		Dictionary dct=new Dictionary();
		Map<Character,ArrayList<HashMap<String,String>>> xyz=new HashMap();
		ArrayList<HashMap<String,String>> am=new ArrayList();
		ArrayList<HashMap<String,String>> bm=new ArrayList();
		ArrayList<HashMap<String,String>> cm=new ArrayList();
		
		HashMap<String,String> aWords=new HashMap<String,String>();
		aWords.put("aggressive", "insistent");
		aWords.put("always", "constantly");
		aWords.put("approved", "accepted");
		am.add(aWords);
		
		HashMap<String,String> bWords=new HashMap<String,String>();
		bWords.put("beneath", "below");
		bWords.put("bare", "only");
		bWords.put("bliss", "beautitude");
		bm.add(bWords);
		
		HashMap<String,String> cWords=new HashMap<String,String>();
		cWords.put("crisis", "dilemma");
		cWords.put("contain", "comprise");
		cWords.put("construct", "build");
		cm.add(cWords);
		System.out.println("From main c"+cm);
		
		xyz.put('a', am);
		xyz.put('b', bm);
		xyz.put('c', cm);
		dct.setDict(xyz);
		dct.display();
		
		System.out.println("Enter word to search: ");
		search=sc.next();
		dct.searchWord(search);
		 
	}

}
