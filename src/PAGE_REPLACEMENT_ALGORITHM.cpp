#include<iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node *next;
};
class lru_alg
{
    int frame,count,fault;
    node *front,*rear;
public:
    lru_alg()
    {
        front=rear=NULL;
        fault=count=0;
    }

    void page_fault();
};

void lru_alg::page_fault()
{
    int flag=0,choose;
    const int size = 23;
	int num[size];
	
	cout<< "Please choose your case(1-3): ";
	cin>>choose;
	
	switch(choose){
		
		case 1:
			{
				ifstream input;
    			input.open("../InputPart2/inputfile1.txt");
    			
   				ofstream output;
    			output.open("../OutputPart2/outputfile1.txt");
    
   				 for(int x=0; x<size; x++){
    				input >> num[x];
				}
				frame = num[0];
	
    			for(int i=1;i<size;i++){
        			if(num[i]==' ')
            		continue;
        			if(front==NULL){
            			front=rear=new node;
            			front->data=num[i];
            			front->next=NULL;
            			fault=count=1;
        			}
        			else{
            			node *temp=front,*prev=NULL;
            			while(temp!=NULL){
                			if(temp->data==num[i]){
                        		flag=1;
                        		if(prev==NULL){
                            		rear=rear->next=front;
                            		front=front->next;
                            		rear->next=NULL;
                        		}
                        		else if(temp!=rear){
                            		prev->next=temp->next;
                            		rear=rear->next=temp;
                            		temp->next=NULL;
                        		}
                        	break;
                			}
                			prev=temp;
                			temp=temp->next;
            			}
           				if(flag==0){
                			if(count==frame){
                    			rear=rear->next=front;
                    			front=front->next;
                    			rear->data=num[i];
                    			rear->next=NULL;
                			}
                		else{
                    		rear=rear->next=new node;
                    		rear->data=num[i];
                    		rear->next=NULL;
                    		count++;
                		}
                			fault++;
            			}
            			flag=0;
        			}
    			}
    			cout<<"Number of page faults : "<<fault;
   				output<<"Case 1: " <<fault<<endl;
   			}
   			break;
   			
   			case 2:
			{
				ifstream input;
    			input.open("../InputPart2/inputfile2.txt");
    			
   				ofstream output;
    			output.open("../OutputPart2/outputfile2.txt");
    
   				 for(int x=0; x<size; x++){
    				input >> num[x];
				}
				frame = num[0];
	
    			for(int i=1;i<size;i++){
        			if(num[i]==' ')
            		continue;
        			if(front==NULL){
            			front=rear=new node;
            			front->data=num[i];
            			front->next=NULL;
            			fault=count=1;
        			}
        			else{
            			node *temp=front,*prev=NULL;
            			while(temp!=NULL){
                			if(temp->data==num[i]){
                        		flag=1;
                        		if(prev==NULL){
                            		rear=rear->next=front;
                            		front=front->next;
                            		rear->next=NULL;
                        		}
                        		else if(temp!=rear){
                            		prev->next=temp->next;
                            		rear=rear->next=temp;
                            		temp->next=NULL;
                        		}
                        	break;
                			}
                			prev=temp;
                			temp=temp->next;
            			}
           				if(flag==0){
                			if(count==frame){
                    			rear=rear->next=front;
                    			front=front->next;
                    			rear->data=num[i];
                    			rear->next=NULL;
                			}
                		else{
                    		rear=rear->next=new node;
                    		rear->data=num[i];
                    		rear->next=NULL;
                    		count++;
                		}
                			fault++;
            			}
            			flag=0;
        			}
    			}
    			cout<<"Number of page faults : "<<fault;
   				output<<"Case 2: " <<fault<<endl;
   			}
   			break;
   			
   			case 3:
			{
				ifstream input;
    			input.open("../InputPart2/inputfile3.txt");
    			
   				ofstream output;
    			output.open("../OutputPart2/outputfile3.txt");
    
   				 for(int x=0; x<size; x++){
    				input >> num[x];
				}
				frame = num[0];
	
    			for(int i=1;i<size;i++){
        			if(num[i]==' ')
            		continue;
        			if(front==NULL){
            			front=rear=new node;
            			front->data=num[i];
            			front->next=NULL;
            			fault=count=1;
        			}
        			else{
            			node *temp=front,*prev=NULL;
            			while(temp!=NULL){
                			if(temp->data==num[i]){
                        		flag=1;
                        		if(prev==NULL){
                            		rear=rear->next=front;
                            		front=front->next;
                            		rear->next=NULL;
                        		}
                        		else if(temp!=rear){
                            		prev->next=temp->next;
                            		rear=rear->next=temp;
                            		temp->next=NULL;
                        		}
                        	break;
                			}
                			prev=temp;
                			temp=temp->next;
            			}
           				if(flag==0){
                			if(count==frame){
                    			rear=rear->next=front;
                    			front=front->next;
                    			rear->data=num[i];
                    			rear->next=NULL;
                			}
                		else{
                    		rear=rear->next=new node;
                    		rear->data=num[i];
                    		rear->next=NULL;
                    		count++;
                		}
                			fault++;
            			}
            			flag=0;
        			}
    			}
    			cout<<"Number of page faults : "<<fault;
   				output<<"Case 3: " <<fault<<endl;
   			}
   			break;
		
	};
	    
    
}
int main()
{
    lru_alg page;
    page.page_fault();
    return 0;
}
