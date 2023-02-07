//Primality-Test.cpp//
class Solution{
    public:
        bool isPrime(int N)
    {
        //Your code here
        if(N < 1){
        return false;
        }
        
        for(int i=2;i<N;i++){
            if(N % i == 0){
                cout<<"No";
        }
        else
        cout<<"Yes";
    }

}
};
