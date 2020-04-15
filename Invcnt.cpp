//<--------------------Shyam Sundar kumawat------------------> 
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define ll long long
#define pi pair<int, int>
#define pl pair<long,long>
#define pll pair<long long,long long>
#define in insert
#define vi vector<int>
#define vl vector<long>
#define	vll vector<long long>
#define vb vector<bool>
#define pb push_back
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define largest 1000009
vl prime;
ll modPow(ll a, ll x, ll p) {
    //This function calculates a^x mod p in logarithmic time.
    long res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}
ll multi_mod(ll a, ll b) 
{ 
    ll ans = 0;
    a = a % mod; 
    while (b > 0) 
    { 
        if (b % 2 == 1) 
            ans = (ans + a) % mod; 
        a = (a * 2) % mod; 
  
        b /= 2; 
    } 
   
    return ans % mod; 
}
struct Node{
	ll value, count;
	struct Node *left;
	struct Node *right;
};
typedef Node Node;
Node* create_node(int val){
	Node *tmp=(Node*)malloc(sizeof(Node));
	tmp->value=val;
	tmp->count=0;
	tmp->left=NULL;
	tmp->right=NULL;
	
	return tmp;
}
int main(){
	fast
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,x,y=0;
		cin>>n;
		Node *root=NULL;
		for(i=0;i<n;i++){
		 cin>>x;
		 	Node  *tmp=(Node*)malloc(sizeof(Node));
		 	tmp->value=x;
		 	tmp->count=0;
		 	tmp->left=NULL;
		 	tmp->right=NULL;
		 	Node *tmp1=(Node*)malloc(sizeof(Node));
		 	tmp1=root;
		 if(tmp1==NULL){
		 //	root=create_node(x);;
		  	root=tmp;
		 //	cout<<"Haan"<<endl;
		 	root->left=NULL;
		 	root->right=NULL;
		 }
		 else{
		 
		     
		   while(tmp1!=NULL){
		     //	cout<<"chal rha hai "<<tmp1->value<<endl;
		   	if(x<tmp1->value){
		        
		   		y+=(tmp1->count+1);
		   		if(tmp1->left!=NULL)
		   		tmp1=tmp1->left;
		   		else{
		   		tmp1->left=tmp;
		   		tmp1=NULL;}
		   
				}
			else if(x==tmp1->value){
				y+=tmp1->count;
		   		if(tmp1->left!=NULL)
		   			tmp1=tmp1->left;
		   		else{
		   			tmp1->left=tmp;
		   			tmp1=NULL;
		    		}
				}
			
			else{
				 tmp1->count+=1;
				// cout<<tmp1->count<<"f"<<endl;
		   		if(tmp1->right!=NULL)
				   tmp1=tmp1->right;
		   		else{
				   tmp1->right=tmp;
		   			tmp1=NULL;
		   			}
				}
			}
			
		   }
		   
		}
		cout<<y<<endl;
	}
	
	return 0;
}
