https://www.hackerrank.com/challenges/array-left-rotation/

int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    std::rotate(a.begin(), a.begin()+d, a.end()); 
    for (int i=0; i < a.size(); i++) 
        std::cout<<a[i]<<" "; 
    return 0;
}