    #include <iostream>
    #include <map>
    using namespace std;

    int main()
    {   ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    long long F,S;
    cin>>n>>m;
    map<long long,long long> mp;
    
        for (int i = 0; i < n; i++)
        {
            cin>>F>>S;
            mp[S]=F;
        }
        
        for (int i = 0; i < m; i++)
        {
            cin>>F>>S;
            if (F==S)
            {
                cout<< "NO";
            }
            else if ( /**/(mp.find(F) == mp.end() || mp.find(S) == mp.end()) /**/ ||
            (mp.find(mp[F]) == mp.end() || mp.find(mp[S]) == mp.end()))
            {
                cout<<"NO"; 
            }//invalid checked
            else if (mp[F]==mp[S])
            {
                cout<<"NO";
            }
            else if ( mp[mp[F]]==mp[mp[S]])
            {
                cout<<"YES";
            }
            else {
            cout<<"NO";
            }
            
            cout<<endl;
        }
        
    }
