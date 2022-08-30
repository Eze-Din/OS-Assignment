#include<bits/stdc++.h>
using namespace std;
// FCFS
void FCFS(){
	int i,n,m,h;
    cout<<"Enter the size of disk\n";
    cin>>m;
    cout<<"Enter number of requests\n";
    cin>>n;
    cout<<"Enter the requests\n";
    vector <int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>m){
            cout<<"Error, Unknown position "<<a[i]<<"\n";
            return FCFS();
        }
    }
    cout<<"Enter the head position\n";
    cin>>h;
    cout<<h;
    for(i=0;i<n;i++){
        cout<<" -> "<<a[i]<<' ';
    }
}
// SCAN
void SCAN(){
	int i,k,n,m,h;
    cout<<"Enter the size of disk\n";
    cin>>m;
    cout<<"Enter number of requests\n";
    cin>>n;
    cout<<"Enter the requests\n";
    vector <int> a(n),b;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>m){
            cout<<"Error, Unknown position "<<a[i]<<"\n";
            return SCAN();
        }
    }
    cout<<"Enter the head position\n";
    cin>>h;
    int temp=h;
    a.push_back(h);
    a.push_back(m);
    a.push_back(0);
    sort(a.begin(),a.end());
    for(i=0;i<a.size();i++){
        if(h==a[i])
            break;
    }
    k=i;
    if(k<n/2){
        for(i=k;i<a.size();i++){
            b.push_back(a[i]);
        }
        for(i=k-1;i>=0;i--){
            b.push_back(a[i]);
        }
    }
    else{    
        for(i=k;i>=0;i--){
            b.push_back(a[i]);
        }
        for(i=k+1;i<a.size();i++){
            b.push_back(a[i]);
        }
    }
    cout<<b[0];
    for(i=1;i<b.size();i++){
        cout<<" -> "<<b[i];
    }
}
//CSCAN
void CSCAN(){
	int i,k,n,m,h;
    cout<<"Enter the size of disk\n";
    cin>>m;
    cout<<"Enter number of requests\n";
    cin>>n;
    cout<<"Enter the requests\n";
    vector <int> a(n),b;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>m){
            cout<<"Error, Unknown position "<<a[i]<<"\n";
            return CSCAN();
        }
    }
    cout<<"Enter the head position\n";
    cin>>h;
    int temp=h;
    a.push_back(h);
    a.push_back(m);
    a.push_back(0);
    sort(a.begin(),a.end());
    for(i=0;i<a.size();i++){
        if(h==a[i])
            break;
    }
    k=i;
    if(k<n/2){
        for(i=k;i<a.size();i++){
            b.push_back(a[i]);
        }
        for(i=0;i<=k-1;i++){
            b.push_back(a[i]);
        }
    }
    else{    
        for(i=k;i>=0;i--){
            b.push_back(a[i]);
        }
        for(i=a.size()-1;i>=k+1;i--){
            b.push_back(a[i]);
        }
    }
    cout<<b[0];
    for(i=1;i<b.size();i++){
        cout<<" -> "<<b[i];
    }
}
// Main
int main(){
	int input;
	cout<<"Welcome to Disk Scheduling!\n";
	cout<<"Enter Your Choice...\n";
	cout<<"1. First Come First Served (FCFS)\n";
	cout<<"2. SCAN\n";
	cout<<"3. C-SCAN\n";
	cin>>input;
	switch (input){
		case 1:
			FCFS();
			break;
		case 2:
			SCAN();
			break;
		case 3:
			CSCAN();
			break;
		default:
			cout<<"Please choose 1 or 2 or 3";
	}
	return 0;
}