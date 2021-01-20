#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numTrack, totalData, num1, num2, num3, num4, num5, num6, num7, num8, sum=0,choose,exit;
    const int size = 20;
    const int  numReq = 9;
    const int startTrack = 53;
    int data[size];
	
	cout<< "Please choose your case(1-4): ";
	cin>>choose;
	
		switch(choose){
		
			case 1:
			{
				ifstream input;
    			input.open("../InputPart1/inputfile1.txt");
    			
    			ofstream output;
    			output.open("../OutputPart1/outputfile1.txt");
    
    			for(int x=0; x<numReq; x++){
    				input >> data[x];
				}
				numTrack = data[0];
	
				for(int y=0; y<numReq; y++){
       				 if(data[y]>numTrack){
           			 cout<<"Error, Unknown position "<<data[y]<<"\n";
           			 return 0;
       		 		}
    			}
	
    			int temp = startTrack;
    			cout << temp;
   				 for (int i = 1; i < numReq; i++){
       				 cout << " -> " << data[i] << ' ';
       				 sum += abs(data[i] - temp);
        		     temp = data[i];
    			}
    			 cout << '\n';
   				 cout << "Case 1: " <<sum<<'\n';
   				 output<<"Case 1: " <<sum<<endl;
   			}
   			break;
   			 
   		case 2:
   			{
				ifstream input;
    			input.open("../InputPart1/inputfile2.txt");
    			
    			ofstream output;
    			output.open("../OutputPart1/outputfile2.txt");
    
    			for(int x=0; x<numReq; x++){
    				input >> data[x];
				}
				numTrack = data[0];
	
				for(int y=0; y<numReq; y++){
       				 if(data[y]>numTrack){
           			 cout<<"Error, Unknown position "<<data[y]<<"\n";
           			 return 0;
        			}
    			}
	
    			int temp = startTrack;
    			cout << temp;
   				 for (int i = 1; i < numReq; i++){
       				 cout << " -> " << data[i] << ' ';
       				 sum += abs(data[i] - temp);
        		     temp = data[i];
    			}
    			 cout << '\n';
   				 cout << "Case 2: " <<sum<< '\n';
   				 output<<"Case 2: " <<sum<<endl;
   			}
   			break;
   			
   			case 3:
   			{
				ifstream input;
    			input.open("../InputPart1/inputfile3.txt");
    			
    			ofstream output;
    			output.open("../OutputPart1/outputfile3.txt");
    
    			for(int x=0; x<numReq; x++){
    				input >> data[x];
				}
				numTrack = data[0];
	
				for(int y=0; y<numReq; y++){
       				 if(data[y]>numTrack){
           			 cout<<"Error, Unknown position "<<data[y]<<"\n";
           			 return 0;
        			}
    			}
	
    			int temp = startTrack;
    			cout << temp;
   				 for (int i = 1; i < numReq; i++){
       				 cout << " -> " << data[i] << ' ';
       				 sum += abs(data[i] - temp);
        		     temp = data[i];
    			}
    			 cout << '\n';
   				 cout << "Case 3: " <<sum<< '\n';
   				 output<<"Case 3: " <<sum<<endl;
   			}
   			break;
   			
   			case 4:
   			{
				ifstream input;
    			input.open("../InputPart1/inputfile4.txt");
    			
    			ofstream output;
    			output.open("../OutputPart1/outputfile4.txt");
    
    			for(int x=0; x<numReq; x++){
    				input >> data[x];
				}
				numTrack = data[0];
	
				for(int y=0; y<numReq; y++){
       				 if(data[y]>numTrack){
           			 cout<<"Error, Unknown position "<<data[y]<<"\n";
           			 return 0;
        			}
    			}
	
    			int temp = startTrack;
    			cout << temp;
   				 for (int i = 1; i < numReq; i++){
       				 cout << " -> " << data[i] << ' ';
       				 sum += abs(data[i] - temp);
        		     temp = data[i];
    			}
    			 cout << '\n';
   				 cout << "Case 4: " <<sum<< '\n';
   				 output<<"Case 4: " <<sum<<endl;
   			}
   			break;			
	};
	
    system("pause");
    return 0;
}
