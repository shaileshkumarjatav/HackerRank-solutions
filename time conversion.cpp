string print24(string s) 
{ 
	// Get hours 
	int h1 = (int)s[1] - '0'; 
	int h2 = (int)s[0] - '0'; 
	int hh = (h2 * 10 + h1 % 10); 

	// If time is in "AM" 
	if (s[8] == 'A') 
	{ 
		if (hh == 12) 
		{ 
			s[0]=0;
			s[1]=0;
		} 
	} 

	// If time is in "PM" 
	else
	{ 
		if (hh == 12) 
		{ 
				s[0]=1;
			    s[1]=2;
		} 
		else
		{ 
			hh = hh + 12; 
			string x =to_string(hh);
			s[0]=x[0];
			    s[1]=x[1];
			
		} 
	}
	string str=s.substr(0,8); 
	
	return str;
} 