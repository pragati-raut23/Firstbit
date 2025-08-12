#include"linkedlist.h"
template <class T>
LinkedList<T>::LinkedList()
{
	this->start=NULL;
	// this->readFromFile("object.txt");
}
template <class T>
void LinkedList<T>::insertAtMid(T& player,int pos)
{
	Node<T> *temp=new Node<T>(player);
	Node<T> *p=start;
	int i=1;
	if(start==NULL){
		start=temp;
	}
	else if(pos==1)
	{
		temp->setNext(start);
		start=temp;
	}
	else
	{
		while(i<pos-1 && p->getNext()!=NULL)
		{
			p=p->getNext();
			i++;
		}
		temp->setNext(p->getNext());
		p->setNext(temp);
	}

}
template <class T>
void LinkedList<T>::deleteAtMid(int j)
{
	if(start==NULL)
	{
		cout<<"\nNo elements to delete!\n";
		return;
	}
	if(start->getData().getJersey()==j )
	{
		start=start->getNext();
	}
	else
	{
		Node<T> *p=start;
		while(p->getNext()!=NULL)
		{
			if(p->getNext()->getData().getJersey()==j)
			{
				 	p->setNext(p->getNext()->getNext());
			}
			p=p->getNext();
		}
		if(p->getNext()->getData().getJersey()==j)
		{
			p->setNext(NULL);
		}
		else
		{
			cout<<"\nJersey no not found!\n";
		}
	}
}
template <class T>
void LinkedList<T>::searchByJersey()
{
	int j;
	cout<<"\nEnter jersey number: ";
	cin>>j;
	Node<T> *p=start;
	while(p!=NULL)
	{
		if(p->getData().getJersey()==j)
		{
			cout<<"\njersey no.: "<<p->getData().getJersey()<<"\tName: "<<p->getData().getName()<<"\nNo. of Matches: "<<p->getData().getNoOfMatch()<<"\tNo. of Runs: "<<p->getData().getRun()<<"\tNo. of Wickets: "<<p->getData().getWicket()<<"\n";
			break;
		}
		p=p->getNext();
	}
}
template <class T>
void LinkedList<T>::searchByName()
{
	char n[20];
	cout<<"\nEnter jersey number: ";
	cin>>n;
	Node<T> *p=start;
	while(p!=NULL)
	{
		if(strcmp(n,p->getData().getName())==0)
		{
			cout<<"\njersey no.: "<<p->getData().getJersey()<<"\tName: "<<p->getData().getName()<<"\nNo. of Matches: "<<p->getData().getNoOfMatch()<<"\tNo. of Runs: "<<p->getData().getRun()<<"\tNo. of Wickets: "<<p->getData().getWicket()<<"\n";
			break;
		}
		p=p->getNext();
	}
}
template <class T>
void LinkedList<T>::updatePlayerInfo(int j)
{
	if(start==NULL)
	{
		cout<<"\nNo element present!\n";
		return;
	}
	else
	{
		Node<T> *p=start;
		while(p!=NULL)
		{
			if(p->getData().getJersey()==j)
			{
				int choice,nm,r,w;
				do
				{
					cout<<"\nWhat you want to update:\n1.update no of matches of player\n2.update runs of the player\n3.update wickets of the player\n0.to exit\n";
					cin>>choice;
					switch(choice)	
					{
						case 1:
							cout<<"\nEnter no of matches: ";
							cin>>nm;
							p->getData().setNoOfMatch(nm);
						break;
						case 2:
							cout<<"\nEnter runs: ";
							cin>>r;
							p->getData().setRun(r);
						break;
						case 3:
							cout<<"\nEnter wickets: ";
							cin>>w;
							p->getData().setWicket(w);
						break;
						case 0:
							cout<<"\nThank youh!\n";
						break;
						default:
						cout<<"\nInvalid choice!\n";	
					}
				}while(choice!=0);
			}
		}
	}
}
template <class T>
void LinkedList<T>::topRunner()
{
	if(start==NULL)
	{
		cout<<"\nNo element present!\n";
		return;
	}
	else if(start->getNext()==NULL)
	{
		cout<<"\nOnly one data present!\n";
		return;
	}
	else if(start->getNext()->getNext()==NULL)
	{
		if(start->getData().getRun() < start->getNext()->getData().getRun())
		{
			start->getNext()->setNext(start);
			start=start->getNext();
		}
		display();
		return;
	}
	int i;
	Node<T> *p=start->getNext();
	Node<T> *first=start;
	while(p!=NULL)
	{
		if(p->getData().getRun()>first->getData().getRun())
		{
			first=p;
		}
		p=p->getNext();
	}
	p=start->getNext();
	Node<T> *second=start;
	while(p!=NULL)
	{
		if(p->getData().getRun()>second->getData().getRun()&&p->getData().getRun()<first->getData().getRun())
		{
			second=p;
		}
		p=p->getNext();
	}
	p=start->getNext();
	Node<T> *third=start;
	while(p!=NULL)
	{
		if(p->getData().getRun()>third->getData().getRun()&&third->getData().getRun()<second->getData().getRun())
		{
			third=p;
		}
		p=p->getNext();
	}
	cout<<"\njersey no.: "<<first->getData().getJersey()<<"\tName: "<<first->getData().getName()<<"\nNo. of Matches: "<<first->getData().getNoOfMatch()<<"\tNo. of Runs: "<<first->getData().getRun()<<"\tNo. of Wickets: "<<first->getData().getWicket()<<"\n";
	cout<<"\njersey no.: "<<second->getData().getJersey()<<"\tName: "<<second->getData().getName()<<"\nNo. of Matches: "<<second->getData().getNoOfMatch()<<"\tNo. of Runs: "<<second->getData().getRun()<<"\tNo. of Wickets: "<<second->getData().getWicket()<<"\n";
	cout<<"\njersey no.: "<<third->getData().getJersey()<<"\tName: "<<third->getData().getName()<<"\nNo. of Matches: "<<third->getData().getNoOfMatch()<<"\tNo. of Runs: "<<third->getData().getRun()<<"\tNo. of Wickets: "<<third->getData().getWicket()<<"\n";
}
template <class T>
void LinkedList<T>::topWicketer()
{
	if(start==NULL)
	{
		cout<<"\nNo element present!\n";
		return;
	}
	else if(start->getNext()==NULL)
	{
		cout<<"\nOnly one data present!\n";
		this->display();
		return;
	}
	else if(start->getNext()->getNext()==NULL)
	{
		if(start->getData().getWicket()<start->getNext()->getData().getWicket())
		{
			start->getNext()->setNext(start);
			start=start->getNext();
		}
		display();
	}
	int i;
	Node<T> *p=start->getNext();
	Node<T> *first=start;
	while(p!=NULL)
	{
		if(p->getData().getWicket()>first->getData().getWicket())
		{
			first=p;
		}
		p=p->getNext();
	}
	p=start->getNext();
	Node<T> *second=start;
	while(p!=NULL)
	{
		if(p->getData().getWicket()>second->getData().getWicket()&&second->getData().getWicket()<first->getData().getWicket())
		{
			second=p;
		}
		p=p->getNext();
	}
	p=start->getNext();
	Node<T> *third=start;
	while(p!=NULL)
	{
		if(p->getData().getWicket()>third->getData().getWicket()&&third->getData().getWicket()<second->getData().getWicket())
		{
			third=p;
		}
		p=p->getNext();
	}
	cout<<"\njersey no.: "<<first->getData().getJersey()<<"\tName: "<<first->getData().getName()<<"\nNo. of Matches: "<<first->getData().getNoOfMatch()<<"\tNo. of Runs: "<<first->getData().getRun()<<"\tNo. of Wickets: "<<first->getData().getWicket()<<"\n";
	cout<<"\njersey no.: "<<second->getData().getJersey()<<"\tName: "<<second->getData().getName()<<"\nNo. of Matches: "<<second->getData().getNoOfMatch()<<"\tNo. of Runs: "<<second->getData().getRun()<<"\tNo. of Wickets: "<<second->getData().getWicket()<<"\n";
	cout<<"\njersey no.: "<<third->getData().getJersey()<<"\tName: "<<third->getData().getName()<<"\nNo. of Matches: "<<third->getData().getNoOfMatch()<<"\tNo. of Runs: "<<third->getData().getRun()<<"\tNo. of Wickets: "<<third->getData().getWicket()<<"\n";
}
template <class T>
void LinkedList<T>::display()
{
	Node<T> *p=start;
	while(p!=NULL)
	{
		cout<<"\njersey no.: "<<p->getData().getJersey()<<"\tName: "<<p->getData().getName()<<"\nNo. of Matches: "<<p->getData().getNoOfMatch()<<"\tNo. of Runs: "<<p->getData().getRun()<<"\tNo. of Wickets: "<<p->getData().getWicket()<<"\n";
		p=p->getNext();
	}
}
template <class T>
void LinkedList<T>::readFromFile(const char* fileName) 
{
        std::ifstream inFile(fileName, std::ios::binary);
        if (!inFile) {
            std::cout<< "Error opening file for reading." << std::endl;
            return;
        }

        T pl;
        int i=1;
        while (inFile.read(reinterpret_cast<char*>(&pl), sizeof(T))) 
		{
            this->insertAtMid(pl,i);
            i++;
        }

        inFile.close();
}
template <class T>
void LinkedList<T>::writeToFile(const char* fileName) 
{
        std::ofstream outFile(fileName, std::ios::binary);
        if (!outFile) {
            std::cout<< "Error opening file for writing." << std::endl;
            return;
        }

        Node<T>* p= start;
        while (p != NULL) {
            outFile.write(reinterpret_cast<char*>(&p->getData()), sizeof(T));
            p = p->getNext();
        }

        outFile.close();
        
}
template <class T>
LinkedList<T>::~LinkedList()
{
	this->writeToFile("object.txt");
	Node<T> *p=start;
	while(start!=NULL)
	{
		start=start->getNext();
		delete p;
		p=start;
	}
}


