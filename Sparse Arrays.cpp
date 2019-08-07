vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
int i,j;
vector<int> res;
for(i=0; i < queries.size(); i++){
    int count=0;
    for(j=0; j < strings.size() ;j++){
        if(queries[i]==strings[j])
         count++;
    }
    res.push_back(count);
}
return res;
}