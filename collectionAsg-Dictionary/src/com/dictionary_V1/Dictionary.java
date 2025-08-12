package com.dictionary_V1;

import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

public class Dictionary {

	Map<Character,Map<String,List<String>>> dictionary=new HashMap<>();
	public List<List<Integer>> threeSum(int[] nums) {

		
        List<List<Integer>> list = new ArrayList<>();

        for(int i=0;i<nums.length;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                for(int k=j+1;k<nums.length;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                    	boolean flag = true;
                    
                        List<Integer> ll=new ArrayList<>();
                        for(List<Integer> l : list)
                        {
                            if(l.contains(nums[i])&& l.contains(nums[j]) &&l.contains(nums[k])) {
                            	flag = false;
                            }
                        }
                        if(flag) {
                        	ll.add(nums[i]);
                            ll.add(nums[j]);
                            ll.add(nums[k]);
                            list.add(ll);
                        }
                    }
                 }
             }
        }
        
        return list;
}
	public Map<Character, Map<String, List<String>>> getDictionary() {
		return dictionary;
	}

	public void setDictionary(Map<Character, Map<String, List<String>>> dictionary) {
		this.dictionary = dictionary;
	}

	public void addWordNdMeaning(String word,String meaning) {
		
		//word with meaning
		
		Map<String, List<String>> dict=this.dictionary.get(word.toLowerCase().charAt(0));
		if(dict!=null) {
			Set<String> w =dictionary.get(word.toLowerCase().charAt(0)).keySet();
			if(w.contains(word.toLowerCase()))
			{
				System.out.println("This Word already exist !");
			}
			else
			{
				dictionary.get(word.toLowerCase().charAt(0)).put(word.toLowerCase(),new ArrayList<>());				
				dictionary.get(word.toLowerCase().charAt(0)).get(word.toLowerCase()).add(meaning);
				System.out.println("Word Added Successfully!");
			}
		}
		else {
			this.dictionary.put(word.toLowerCase().charAt(0), new HashMap<>());
			dictionary.get(word.toLowerCase().charAt(0)).put(word.toLowerCase(),new ArrayList<>());
			dictionary.get(word.toLowerCase().charAt(0)).get(word.toLowerCase()).add(meaning);
			System.out.println("Word Added Successfully!");
		}
	}
	
	public void addMeaning(String word,String meaning) {
		Map<String, List<String>> dict=this.dictionary.get(word.toLowerCase().charAt(0));
		if(dict!=null) {
			List<String> l=dict.get(word.toLowerCase());
			if(l!=null) {
				l.add(meaning);
				System.out.println("Meaning Successfully Added");
			}
			else {
				//System.out.println("Word not found!");
				addWordNdMeaning(word,meaning);
			}
		}
		else {
			//System.out.println("There is no word to add meaning");
			addWordNdMeaning(word,meaning);
		}

	}
	
	public void display() {
	    try {
	    	int flag=0;
			Set<Entry<Character, Map<String, List<String>>>> dict=this.dictionary.entrySet();
			Iterator<Entry<Character, Map<String, List<String>>>> iot=dict.iterator();
			while(iot.hasNext()) {
				flag=1;
				System.out.println(iot.next());
			}
			if(flag==0) {
				System.out.println("Dictionary is empty!");
			}
		} catch (NullPointerException e) {
			System.out.println("Dictionary is empty!");
		}
	}
	
	public void search(String word) {
		
		try {
			Map<String,List<String>> wordMean=new HashMap<>();
			int flag=-1;
			Map<String,List<String>> words=this.dictionary.get(word.toLowerCase().charAt(0));
			for(Entry<String, List<String>> wm:words.entrySet()){
				if(wm.getKey().startsWith(word.toLowerCase())) {
					wordMean.put(wm.getKey(), wm.getValue());
					flag++;
				}
			}
			if(flag==-1) {
				System.out.println("Word not found!");
			}
			else {
				Set ip=wordMean.entrySet();
				Iterator op=ip.iterator();
				while(op.hasNext()) {
					System.out.println(op.next());
				}
			}
		} catch (NullPointerException e) {
			
			System.out.println("Dictionary is empty!");
		}
	}
}
