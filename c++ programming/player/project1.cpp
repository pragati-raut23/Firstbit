using namespace std;
#include<iostream>
#include<string.h>
int t=3;
class Player
{
	char name[20];
	int no_match,run,wicket,jersey;
	public:
		Player()
		{
			cout<<"\nDefault constructor\n";
			this->jersey=0;
			strcpy(this->name,"not_given");
			this->no_match=0;
			this->run=0;
			this->wicket=0;	
		}
		Player(int j,char* n,int nm,int r,int w)
		{
			cout<<"\nParameterised constructor\n";
			this->jersey=j;
			strcpy(this->name,n);
			this->no_match=nm;
			this->run=r;
			this->wicket=w;	
		}	
		void setJersey(int j)
		{
			this->jersey=j;
		}
		void setName(char* n)
		{
			strcpy(this->name,n);
		}
		void setNoOfMatch(int nm)
		{
			this->no_match=nm;
		}
		void setRun(int r)
		{
			this->run=r;
		}
		void setWicket(int w)
		{
			this->wicket=w;
		}
		int getJersey()
		{
			return this->jersey;
		}
		char* getName()
		{
			return this->name;
		}
		int getNoOfMatch()
		{
			return this->no_match;
		}
		int getRun()
		{
			return this->run;
		}
		int getWicket()
		{
			return this->wicket;
		}
		void display()
		{
			cout<<"\njersey no. "<<this->jersey<<": "<<this->name<<" player played "<<this->no_match<<" matches \nhe made "<<this->run<<" runs and took "<<this->wicket<<" wickets\n";
		}
};
void store_data(Player*);
//void display(Player*);
int search_by_id(Player*,int);
int search_by_name(Player*,char*);
int delet(Player*,int);
void update(Player*,int);
void sorting(Player*);
void top_runner(Player*);
void top_wicketer(Player*);
int main()
{
	Player arr[t];
	int i,choice,j,res,n,ret;
	char name[20];
	store_data(arr);
	do
	{
	cout<<"\nenter your choice:\n2.display data of players\n3.search player in list\n4.delete any player from list\n5.update player info\n6.sort list of players by jearcy no.\n7.top 3 players by runs\n8.top 3 players by wickets\n0.exit\n";
	//printf("\nenter your choice:\n1.store data of players\n2.display data of players\n3.search player in list\n4.delete any player from list\n5.update player info\n6.sort list of players by jearcy no.\n7.top 3 players by runs\n8.top 3 players by wickets\n0.exit\n");
	cin>>choice;
		switch(choice)
		{
			/*case 1:
			store_data(arr);
			break;*/
			case 2:	
			for(i=0;i<t;i++)
			{
				arr[i].display();
			}
			break;
			case 3:
				{
					do
					{
						cout<<"\nenter choice:\n1.search by jearcy no. \n2.search by name\n0.exit\n";
						cin>>n;
						switch(n)
						{
						 	case 1:
							{
								cout<<"\nenter jersey no to search:\n";
								cin>>j;
								res=search_by_id(arr,j);
								if(res==-1)
								cout<<"\njearcy no not found!\n";
								else
								arr[res].display();
									//cout<<"\njersey no. "<<arr[res].getJersey()<<" : "<<arr[res].getName()<<" player played "<<arr[res].getNoOfMatch()<<" matches \nhe made "<<arr[res].getRun()<<" runs and took "<<arr[res].getWicket()<<" wickets\n";
							}
							break;
							case 2:
							{
								cout<<"\nenter name of the player to search:\n";
								cin>>name;
								res=search_by_name(arr,name);
								if(res==-1)
									cout<<"\nplayer not found in a list\n";
								else
									cout<<"\njersey no. "<<arr[res].getJersey()<<" : "<<arr[res].getName()<<" player played "<<arr[res].getNoOfMatch()<<" matches \nhe made "<<arr[res].getRun()<<" runs and took "<<arr[res].getWicket()<<" wickets\n";
							}
							break;
							case 0:
								cout<<"\nThank you!\n";
							break;
							default:
								cout<<"\ninvalid choice\n";
						}
					}while(n!=0);
				}
				break;
			case 4:
				cout<<"\nenter jersey no of a player you want to delete from player list\n";
				cin>>j;
				res=search_by_id(arr,j);
				if(res==-1)
				cout<<"\njesey no not found!\n";
				else
				ret=delet(arr,res);
				if(ret==0)
				cout<<"\nPlayer deleted from list successfully!\n";
			break;
			case 5:
				cout<<"\nenter jersey no of a player you want to update from player list\n";
				cin>>j;
				res=search_by_id(arr,j);
				if(res==-1)
				cout<<"\njesey no not found!\n";
				else
				update(arr,res);
			break;
			case 6:
			sorting(arr);
			cout<<"\nPlayer list arranged by jersey number\n";
			break;
			case 7:
			top_runner(arr);
				cout<<"\n1st top runner is:\n";
				cout<<"jersey no. "<<arr[0].getJersey()<<" : "<<arr[0].getName()<<" player played "<<arr[0].getNoOfMatch()<<" matches \nhe made "<<arr[0].getRun()<<" runs and took "<<arr[0].getWicket()<<" wickets\n";
				cout<<"\n2nd top runner is:\n";
				cout<<"\njersey no. "<<arr[1].getJersey()<<" : "<<arr[1].getName()<<" player played "<<arr[1].getNoOfMatch()<<" matches \nhe made "<<arr[1].getRun()<<" runs and took "<<arr[1].getWicket()<<" wickets\n";
				cout<<"\n3rd top runner:\n";
				cout<<"\njersey no. "<<arr[2].getJersey()<<" : "<<arr[2].getName()<<" player played "<<arr[2].getNoOfMatch()<<" matches \nhe made "<<arr[2].getRun()<<" runs and took "<<arr[2].getWicket()<<" wickets\n";
			break;
			case 8:
			top_wicketer(arr);
				cout<<"\n1st top wicketer is:\n";
				cout<<"\njersey no. "<<arr[0].getJersey()<<" : "<<arr[0].getName()<<" player played "<<arr[0].getNoOfMatch()<<" matches \nhe made "<<arr[0].getRun()<<" runs and took "<<arr[0].getWicket()<<" wickets\n";
				cout<<"\n2nd top wicketer is:\n";
				cout<<"\njersey no. "<<arr[1].getJersey()<<" : "<<arr[1].getName()<<" player played "<<arr[1].getNoOfMatch()<<" matches \nhe made "<<arr[1].getRun()<<" runs and took "<<arr[1].getWicket()<<" wickets\n";
				cout<<"\n3rd top wicketer is:\n";
				cout<<"\njersey no. "<<arr[2].getJersey()<<": "<<arr[2].getName()<<" player played "<<arr[2].getNoOfMatch()<<" matches \nhe made "<<arr[2].getRun()<<" runs and took "<<arr[2].getWicket()<<" wickets\n";
			break;
			case 0:
			cout<<"\nThank You!\n";
			break;
			default:
			cout<<"\nenter correct choice\n";	
		}
	}while(choice!=0);
	return 0;
}
/*void store_data(player *arr)
{
	arr[0].jersey=18;
	strcpy(arr[0].name,"virat");
	arr[0].no_match=50;
	arr[0].run=600;
	arr[0].wicket=30;
	arr[1].jersey=10;
	strcpy(arr[1].name,"sachin");
	arr[1].no_match=80;
	arr[1].run=1000;
	arr[1].wicket=25;
	arr[2].jersey=07;
	strcpy(arr[2].name,"m.s.dhoni");
	arr[2].no_match=70;
	arr[2].run=800;
	arr[2].wicket=45;
}*/
void store_data(Player *arr)
{
	int j,nm,r,w;
	char n[20];
	int i;
	for(i=0;i<t;i++)
	{
		cout<<"enter jearcy number of player:\n";
		cin>>j;
		cout<<"enter name of the player:\n";
		cin>>n;
		cout<<"how many matches player played:\n";
		cin>>nm;
		cout<<"how many runs player make:\n";
		cin>>r;
		cout<<"how many wickets player took:\n";
		cin>>w;
		arr[i].setJersey(j);
		arr[i].setName(n);
		arr[i].setNoOfMatch(nm);
		arr[i].setRun(r);
		arr[i].setWicket(w);
	}
}
int search_by_id(Player *arr,int j)
{
	int index;
	for(index=0;index<t;index++)
	{
		if(arr[index].getJersey()==j)
		{
			return index;
		}
	}
	return -1;
}
		
int	search_by_name(Player *arr,char*name)
{
	int index,ans;
	for(index=0;index<t;index++)
	{
		ans=strcmp(arr[index].getName(),name);
		if(ans==0)
		{
			return index;
		}
	}
	return -1;
}
int delet(Player *arr,int res)
{
	while(res<t-1)
	{
		arr[res]=arr[res+1];
		res++;
	}
	t--;
	return 0;
}
void update(Player *arr,int res)
{
	int nm,r,w;
	int choice;
		do
		{
			cout<<"\nwhat you want to update:\n1.no of matches\n2.no of runs\n3.no of wickets\n0.exit\n";
			cin>>choice;
			switch(choice)
			{
				case 1:
					{
						cout<<"\nhow many matches player played:\n";
						cin>>nm;
						arr[res].setNoOfMatch(nm);
					}
					break;
				case 2:
					{	
						cout<<"\nhow many runs player make:\n";
						cin>>r;
						arr[res].setRun(r);
					}
					break;
				case 3:
					{
						cout<<"\nhow many wickets player took:\n";
						cin>>w;
						arr[res].setWicket(w);
					}
					break;
				case 0:
					cout<<"\nThank you!\n";
					break;
				default:
					cout<<"\nenter valid choice\n";
			}
		}while(choice!=0);
}
void sorting(Player *brr)
{
	Player temp;
	Player arr[t];
	
	int i,j;
	for(i=0;i<t;i++)
	{
		arr[i]=brr[i];
	}
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(arr[i].getJersey()>arr[j].getJersey())
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void top_runner(Player *arr)
{
	Player temp;
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(arr[i].getRun()<arr[j].getRun())
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void top_wicketer(Player *arr)
{
	Player temp;
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(arr[i].getWicket()<arr[j].getWicket())
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
