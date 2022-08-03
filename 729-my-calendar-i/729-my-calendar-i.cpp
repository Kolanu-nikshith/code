class MyCalendar {
public:
map<int,int>mp;
  
  MyCalendar() {
    
        }

bool book(int s, int end){
   //Step 1 : find upper bound
    auto it=mp.upper_bound(s);
	
	//if uppuer bound not present then simply add 
	// if upper bound present but end value less than simply add and return true
	if(it==mp.end() or it->second>=end){
	     mp[end]=s;
		 return true;
	}
	//upper bound present but end > it.second
	else{
	return false;
	}
}
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */