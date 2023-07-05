

# include <iostream>
using namespace std;

int main(){
      int A[4]={1,3,4,5};
      int B[4]={4,5,1,8};
      int i,j;
      for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(A[i]==B[j]){
                cout<<" "<<A[i]<<endl;
            }
        }
      }
      return 0;
}
