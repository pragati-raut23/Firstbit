#include"linkedlist.cpp"
int main() {
	int j,nm,r,w,choice,pos,ch;
	char n[20];
	Player p;
	LinkedList<Player> player;
	LinkedList<Employee> emp;
	// file read
	ls.readFromFile("object.txt");
	do {
		//cout<<"\nenter your choice:\n2.display data of players\n3.search player in list\n4.delete any player from list\n5.update player info\n6.sort list of players by jearcy no.\n7.top 3 players by runs\n8.top 3 players by wickets\n0.exit\n";
		printf("\nenter your choice:\n1.Inset data of players\n2.display data of players\n3.search player in list\n4.delete any player from list\n5.update player info\n6.top 3 players by runs\n7.top 3 players by wickets\n0.exit\n");
		cin>>choice;
		switch(choice) {
			case 1:

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
				p.setJersey(j);
				p.setName(n);
				p.setNoOfMatch(nm);
				p.setRun(r);
				p.setWicket(w);
				cout<<"\nEnter the position: ";
				cin>>pos;
				ls.insertAtMid(p,pos);
				break;
			case 2:
				ls.display();
				break;
			case 3: {
				do {
					cout<<"\nenter choice:\n1.search by jearcy no. \n2.search by name\n0.exit\n";
					cin>>ch;
					switch(ch) {
						case 1: {
							ls.searchByJersey();
						}
						break;
						case 2: {
							ls.searchByName();
						}
						break;
						case 0:
							cout<<"\nThank you!\n";
							break;
						default:
							cout<<"\ninvalid choice\n";
					}
				} while(ch!=0);
			}
			break;
			case 4:
				cout<<"\nenter jersey no of a player you want to delete from player list\n";
				cin>>j;
				ls.deleteAtMid(j);
				break;
			case 5:
				cout<<"\nenter jersey no of a player you want to update from player list\n";
				cin>>j;
				ls.updatePlayerInfo(j);
				break;
			case 6:
				ls.topRunner();
				break;
			case 7:
				ls.topWicketer();
				break;
			case 0:
				ls.writeToFile("object.txt");
				cout<<"\nThank You!\n";
				break;
			default:
				cout<<"\nenter correct choice\n";
		}
	} while(choice!=0);
}

