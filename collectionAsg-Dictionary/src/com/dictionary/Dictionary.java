package com.dictionary;

import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.HashMap;
import java.util.Iterator;
import java.util.ArrayList;

public class Dictionary {

	Map<Character,ArrayList<HashMap<String,String>>> dict=new HashMap();

	
	public Map<Character, ArrayList<HashMap<String, String>>> getDict() {
		return dict;
	}

	public void setDict(Map<Character, ArrayList<HashMap<String, String>>> dict) {
		this.dict = dict;
	}
	
	/*
	 * public void addToDict(String word,String meaning) { Set key=dict.keySet();
	 * Iterator itr=key.iterator(); while(itr.hasNext()) {
	 * if(itr.equals(word.charAt(0))) {
	 * 
	 * } } }
	 * 
	 * public void addWord(String word,String meaning) { dict.put("a", new
	 * ArrayList()); ArrayList wm=new ArrayList(); Set key=dict.keySet(); Iterator
	 * itr=key.iterator(); while(itr.hasNext()) { if(itr.equals(word.charAt(0))) {
	 * 
	 * } } }
	 */
	public void display() {
		Set<Entry<Character, ArrayList<HashMap<String, String>>>> list=this.dict.entrySet();
		Iterator<Entry<Character, ArrayList<HashMap<String, String>>>> iot=list.iterator();
		while(iot.hasNext()) {
			System.out.println(iot.next());
		}
		
		//System.out.println("Animal".startsWith("ani"));
	}
	
	public void searchWord(String word) {
		ArrayList<HashMap<String,String>> pr=this.dict.get(word.charAt(0));
		System.out.println(pr);
		Iterator<HashMap<String,String>> itr=pr.iterator();
		//co meaning
		//co meaning
		
		while(itr.hasNext()) {
			 HashMap<String, String> k=itr.next(); 
//			 Set key=k.entrySet();
			 for(Map.Entry<String, String> e:k.entrySet()) {
				 if(e.getKey().startsWith(word)) {
					 System.out.println(e);
				 }
			 }
			 
		}
	}
}
