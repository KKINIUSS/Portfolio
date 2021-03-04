#include <iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
void MoveStrings(vector<string>& a, vector<string>& b){

    for (auto w: a){

        b.push_back(w);

    }

    a.clear();

}
void Reverse(vector<int>& v){

    for(int i=0;i<v.size()/2;i++){

        int t = v[i];

        v[i] = v[v.size()-1-i];

        v[v.size()-1-i] = t;

    }

}
vector<int> Reversed(const vector<int>& v){

    vector<int> a;

    for(int i=v.size()-1;i>=0;i--){

        a.push_back(v[i]);

    }
    return a;

}
void NextMonth(int& index,const vector<int>& days,vector<vector<string>>& t){

    index = (index+1)%12;

    vector<vector<string>> NewMonth = t;

    int a = t.size();

    int b = days[index];

    t.resize(b);

    int p = b-1;

    if (a>b){

        for(b ; a>b; b++){

            t[p].insert(end(t[p]), begin(NewMonth[b]),end(NewMonth[b]));

        }

    }

    NewMonth.clear();

}
void Show(int x,const vector<vector<string>>& t){

    cout<<t[x-1].size();

    for(auto i: t[x-1]){

        cout<<" "<<i;

    }

    cout<<endl;

}
map<int, char> BuildCharCounters(string& s){

    map<int, char> m;

    for(auto k: s){

        m[k]++;

    }

    return m;

}
map<string, string> CHANGE_CAPITAL(map<string, string>& country, string countryIndex, string new_capital){

    if(country.count(countryIndex)!=0){

        if(country[countryIndex]==new_capital){

            cout<<"Country "<<countryIndex<<" hasn't changed its capital "<<endl;

        }

        else{

            cout<<"Country "<<countryIndex<<" has changed its capital from "<<country[countryIndex]<<" to "<<new_capital<<endl;

            country[countryIndex]=new_capital;

        }

    }

    else {

        cout<<"Introduce new country "<<countryIndex<<" with capital "<<new_capital<<endl;

        country[countryIndex]=new_capital;

    }

    return country;

}
map<string, string> RENAME(map<string, string>& country, string old_country_name, string new_country_name){

    if((old_country_name==new_country_name)||(country.count(old_country_name)==0)||(country.count(new_country_name)!=0)){

        cout<<"Incorrect rename, skip"<<endl;

    }

    else{

        cout<<"Country "<<old_country_name<<" with capital "<<country[old_country_name]<<" has been renamed to "<<new_country_name<<endl;

        country[new_country_name]=country[old_country_name];

        country.erase(old_country_name);

    }

    return country;

}
vector<string>  PalindromFilter(vector<string> words, int min_length) {

    vector<string> answer;

    int k=1;

    for(int i=0;i<words.size();++i){

        string s = words[i];

        if(s.size()>=min_length){

            for(int j=0;j<s.size()/2;++j){

                if(s[j]!=s[s.size()-j-1]){

                    k=0;

                }

            }

            if (k) answer.push_back(s);

            k=1;

        }

    }

    return answer;

}
void PrintBusesForStop(map<string, vector<string>>& stops,const string& stop) {

    if (stops.count(stop) == 0) {

        cout << "No stop" << endl;

    }

    else {

        for (const string& bus : stops[stop]) {

            cout << bus << " ";

        }

        cout << endl;

    }

}
void PrintStopsForBus(map<string, vector<string>>& buses,map<string, vector<string>>& stops, const string& bus) {

    if (buses.count(bus) == 0) {

        cout << "No bus" << endl;

    }

    else {

        for (const string& stop : buses[bus]) {

            cout << "Stop " << stop << ": ";

            if (stops[stop].size() == 1) {

                cout << "no interchange";

            }

            else {

                for (const string& other_bus : stops[stop]) {

                    if (bus != other_bus) {

                        cout << other_bus << " ";

                    }

                }

            }

            cout << endl;

        }

    }

}

void PrintAllBuses(const map<string, vector<string>>& buses) {

    if (buses.empty()) {

        cout << "No buses" << endl;

    }

    else {

        for (const auto& bus_item : buses) {

            cout << "Bus " << bus_item.first << ": ";

            for (const string& stop : bus_item.second) {

                cout << stop << " ";

            }

            cout << endl;

        }

    }

}

set<string> BuildMapValuesSet(const map<int, string>& m) {

    set<string> s;

    for(const auto& x : m){

        s.insert(x.second);

    }

    return s;

}

class SortedStrings {

public:

    void AddString(const string& s) {

        v.push_back(s);

    }

    vector<string> GetSortedStrings() {

        sort(v.begin(), v.end());

        return v;

    }

private:

    vector<string> v;

};

string FindName (const int year, const map<int, string>& m ){

    string name;

    for(const auto& x:m){

        if(x.first <= year)name = x.second;

        else break;

    }

    return name;

}

vector<string> getData(int year,const map<int, string>& m){

    map<int,string> _m=m;

    vector<string> ans;

    for(int i=year; i>0;i--){

        if(_m.count(i))

            ans.push_back(_m[i]);

    }

    return ans;

}

string GetNames (const vector<string>& v){

    string x=v[0];

    string ans;

    int lim = v.size()-1;

    for(int i=1;i<lim;i++){

        if(x!=v[i]){

            ans+=v[i]+", ";

            x=v[i];

        }

    }

    if(v[lim]!=x)ans+=v[lim];

    if(!ans.empty()){

        return " (" + ans + ")";

    }

    return ans;

}

class Person {

public:

    Person(const string& name, const string& sName, int year){

        firstName[year] = name;

        lastName[year] = sName;

        b = year;

    }

    void ChangeFirstName(int year, const string& first_name) {

        if(year>b)

            firstName[year] = first_name;

    }

    void ChangeLastName(int year, const string& last_name) {

        if(year>b)

            lastName[year] = last_name;

    }

    string GetFullName(int year) const {

        if(year<b)return "No person";

        string name = FindName(year,firstName);

        string lname = FindName(year, lastName);

        if(!name.empty() && !lname.empty())

            return name + " " + lname;

        else if(!name.empty())

            return name + " with unknown last name";

        else if(!lname.empty())

            return lname + " with unknown first name";

        else return "Incognito";

    }

    string GetFullNameWithHistory(int year) const {

        if(year<b)return "No person";

        vector<string> names = getData(year, firstName);

        vector<string> lnames = getData(year, lastName);

        string ans;

        if(!names.empty() && !lnames.empty()){

            ans = names[0];

            if(names.size()>1){

                ans += GetNames(names);

            }

            ans+=(" " + lnames[0]);

            if(lnames.size() > 1 ){

                ans += GetNames(lnames);

            }

            return ans;

        }

        else if(!names.empty()){

            ans = names[0];

                if(names.size() > 1){

                    ans+= GetNames(names);

                }

                ans += " with unknown last name";

        }

        else if(!lnames.empty()){

            ans = lnames[0];

            if(lnames.size() > 1){

  			ans += GetNames(lnames);

            }

            ans += " with unknown first name";

        }

        else ans = "Incognito";

        return ans;

    }

private:

    map<int, string> firstName;

    map<int, string> lastName;

    int b;

};

class ReversibleString{

public:

    ReversibleString(){}

    ReversibleString(const string& s){

        data = s;

    }

    void Reverse (){

        reverse(begin(data), end(data));

    }

    string ToString() const{

        return data;

    }

private:

    string data;

};

struct Incognizable{

    int x = 0;

    int y = 0;

};

class Weather {

public:

    Weather(const string& new_state, int new_temperature) {

        state = new_state;

        temperature = new_temperature;

        cout << 'c';

    }

    ~Weather() {

        cout << 'd';
  }

private:

    string state;

    int temperature;

};

Weather GetMayWeather(int day) {

    if (day == 9) {

        cout << 'b';

        return {"clear", 10};

    }

    else {

        cout << 'b';

        return {"cloudy", 10};

    }
}

struct Specialization{

    string v;

    explicit Specialization(string _v){

        v = _v;

    }

};

struct Week{

    string v;

    explicit Week(string _v){

        v = _v;

    }

};

struct Course{

    string v;

    explicit Course(string _v){

        v = _v;

    }

};

struct LectureTitle {

    string specialization;

    string course;

    string week;

    LectureTitle(Specialization new_spec, Course new_course, Week new_week){

        specialization = new_spec.v;

        course = new_course.v;

        week = new_week.v;

    }

};

class FunctionPart {

public:

    FunctionPart(char new_operation, double new_value) {

        operation = new_operation;

        value = new_value;

    }

    double Apply(double source_value) const {

        if (operation == '+') {

            return source_value + value;

        }
        else if(operation =='-') {

            return source_value - value;

        }

        else if(operation == '*'){

            return source_value*value;

        }

        else return source_value/value;

    }

    void Invert() {

        if (operation == '+') {

            operation = '-';

        }
        else if(operation=='-'){

            operation = '+';

        }

        else if(operation =='*'){

            operation = '/';

        }

        else operation = '*';

    }

private:

    char operation;

    double value;

};

class Function {

public:

    void AddPart(char operation, double value) {

        parts.push_back({operation, value});

    }

    double Apply(double value) const {

        for (const FunctionPart& part : parts) {

            value = part.Apply(value);

        }

        return value;

    }

    void Invert() {

        for (FunctionPart& part : parts) {

            part.Invert();

        }

        reverse(begin(parts), end(parts));

    }

private:

    vector<FunctionPart> parts;

};


int main() {

  return 0;
}


