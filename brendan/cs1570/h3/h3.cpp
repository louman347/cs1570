//Programmer: Brendan Curran    Date: 9/16/2014
//File: H3 injury triage        Class cs 1570, section C
//purpose: To prioritize two patients depending on their injury
//to see which to treat first
#include <iostream>
using namespace std;

int main()
{
  //injuries
  const string earlobe = "Earlobe gastrophilology";
  const int earlobescore = 5;
  const string cerebral = "cerebral contusion";
  const int cerebralscore = 9;
  const string ego = "altered ego";
  const int egoscore = 4;
  const string brneck = "broken neck";
  const int brneckscore = 6;
  const string smiley = "permanent smiley face";
  const int smileyscore = 3;
  const string psurgery = "deformed plastic surgery";
  const int psurgeryscore = 1;
  const string diskr = "ruptured disk";
  const int diskrscore = 7;
  const string bbq = "bbq'd ribs";
  const int bbqscore = 7;
  const string intestine = "intestinal distress";
  const int intestinescore = 2;
  const string alcohol = "alcohol poisoning";
  const int alcoholscore = 2;
  const string flail = "flail chest";
  const int flailscore = 4;
  const string alien = "alien implantation";
  const int alienscore = 8;
  const string toe = "burned toe hair";
  const int toescore = 1;
  const string femur ="fractured femur";
  const int femurscore = 3;
  const string radius = "broken radius";
  const int radiusscore =3;
  const string finger = "finger nail fungus";
  const int fingerscore = 0;
  
  //patient names
  string name1;
  string name2;
  
  //outputs 1st or 2nd
  string poutput ="1st"; 
  
  //counter to run entire program twice
  int patientnum = 1; 
  
  //menu selection variable, will be recycled
  int choice; 
  string p1injury;
  string p2injury;
  int p1score;
  int p2score;
  
  
  
  cout << "Hello Dr. Eloe"";
  
  //main program loop
  while (patientnum !=3) 
  {
    if (patientnum ==2)
	  poutput = "2nd";
    cout << "What is your " << poutput << " patient's name?: ";
	(patientnum == 1 ? cin>> name1 : cin>> name2);
	cout << ""Where is " << (patientnum == 1 ? name1: name2) << "'s injury?"";
	cout << "1. Head & Neck"2. Torso"3. Extremity"4. Not Listed"your choice: ";
	cin >> choice;
	cout << """;
	
	switch (choice)
    {
    //head	
	case 1: cout << "In what region is "<< (patientnum == 1 ? name1: name2) << "'s injury";
	        cout << ""1. Head"2. Neck"3. Face"your choice: ";
	        cin >> choice;
			
			switch (choice)
			{
			//head
			case 1:cout << ""What injury does " << (patientnum == 1 ? name1: name2) << " have?""; 
			       cout << "1. "<< earlobe <<" (super-hyper lobe contusional inflamation)"";
				   cout << "2. " <<cerebral <<""3. " <<ego <<"(d in cs 1570)"your choice: ";
				   cin >> choice;
				   cout << """;
				   
				   switch (choice)
				   {
				     case 1: (patientnum == 1 ? p1score : p2score ) = earlobescore;
					         (patientnum == 1 ? p1injury : p2injury ) = earlobe;
							 break;
					 case 2: (patientnum == 1 ? p1score : p2score ) = cerebralscore;
					         (patientnum == 1 ? p1injury : p2injury ) = cerebral;
					          break;
					 case 3: (patientnum == 1 ? p1score : p2score ) = egoscore;
					         (patientnum == 1 ? p1injury : p2injury ) = ego;
					          break;
				   }
				   break;
				   
			//Neck	   
		    case 2: cout << (patientnum == 1 ? name1: name2) << " must have a broken neck"";
			        (patientnum == 1 ? p1score : p2score ) = brneckscore;
					(patientnum == 1 ? p1injury : p2injury ) = brneck;
					break;
			//face
			case 3: cout <<	""What injury does " << (patientnum == 1 ? name1: name2) << " have?""; 
                    cout << "1. Permanent smiley face"2. Deformed plastic surgery (melting)"your choice: ";
					cin >> choice;
					cout << """;
					(patientnum == 1 ? p1score : p2score ) = (choice ==1 ? smileyscore:psurgeryscore);
					(patientnum == 1 ? p1injury : p2injury ) = (choice ==1 ? smiley: psurgery);
					break;
			}
			break;
	//torso		
	case 2:cout << "In what region is "<< (patientnum == 1 ? name1: name2) << "'s injury";
	       cout << ""1. back"2. abdomen"3. chest"your choice: ";
		   cin >> choice;
		   cout << """; 
		   cout <<""What injury does " << (patientnum == 1 ? name1: name2) << " have?"";
		   switch (choice)
		   {
		   //back
		   case 1:cout << "1. " << diskr << ""2. " << bbq << ""your choice: ";
		          cin >> choice;
				  cout << """;
				  (patientnum == 1 ? p1score : p2score ) = (choice ==1 ? diskrscore: bbqscore);
				  (patientnum == 1 ? p1injury : p2injury ) = (choice ==1 ? diskr: bbq);
				  break;		   
           //abdomen
		   case 2:cout << "1. " << intestine << ""2. " << alcohol << ""your choice: ";
		          cin >> choice;
				  cout << """;
				  (patientnum == 1 ? p1score : p2score ) = (choice ==1 ? intestinescore: alcoholscore);
				  (patientnum == 1 ? p1injury : p2injury ) = (choice ==1 ? intestine: alcohol);
				  break;
           //chest
		   case 3:cout << "1. " << flail << ""2. " << alien << ""your choice: ";
		          cin >> choice;
                  cout << """;
				  (patientnum == 1 ? p1score : p2score ) = (choice ==1 ? flailscore:alienscore);
				  (patientnum == 1 ? p1injury : p2injury ) = (choice ==1 ? flail: alien);
                  break;			 
     	  }
	
	       break;
	//extremity	   
	case 3:cout << "In what region is "<< (patientnum == 1 ? name1: name2) << "'s injury";
	       cout << ""1. leg"2. arm"your choice: ";
		   cin >> choice;
		   cout << ""What injury does "  << (patientnum == 1 ? name1: name2) << " have?"";
		   switch (choice)
		   {
		     case 1: cout << "1. " << toe << ""2. "<< femur << ""your choice: ";
			         cin >> choice;
			         (patientnum == 1 ? p1score : p2score ) = (choice ==1 ? toescore:femurscore);
			         (patientnum == 1 ? p1injury : p2injury ) = (choice ==1 ? toe: femur);
			          break;
			 case 2:cout << "1. " << radius << ""2. " << finger << ""your choice: ";
			        cin >> choice;
				 	(patientnum == 1 ? p1score : p2score ) = (choice ==1 ? radiusscore:fingerscore);
			        (patientnum == 1 ? p1injury : p2injury ) = (choice ==1 ? radius: finger);
					 break;
		  }
	      break;
	//not listed	  
	case 4:
	  (patientnum == 1 ? p1score : p2score ) = -1;
	  (patientnum == 1 ? p1injury : p2injury ) = "can't treat this";
	  break;
	}
	
	patientnum++;
	
  }
  cout << """;
  
  if(p1score <0 && p2score >=0)
  {
    cout << name1 << " needs to find a new hospital we dont deal with that here"";
	cout << name2 << " will be treated immediately for "<< p2injury << ", severity rating " << p2score << endl;
  }
  else if (p2score <0 && p1score >=0)
  {
    cout << name2 << " needs to find a new hospital we dont deal with that here"";
	cout << name1 << " will be treated immediately for "<< p1injury << ", severity rating " << p1score << endl;
  }
  else if (p1score>p2score || (p1score==p2score && name1<=name2))
  {
    cout << name1 << " will be treated first for " << p1injury << ", severity rating " << p1score << endl;
	cout << name2 << " will be treated after for " << p2injury << ", severity rating " << p2score << endl;
  }
  else if (p1score<p2score || (p1score==p2score && name2<name1))
  {
    cout << name2 << " will be treated first for " << p2injury << ", severity rating " << p2score << endl;
	cout << name1 << " will be treated after for " << p1injury << ", severity rating " << p1score << endl;
  }
  else
  {
    cout << "You both need to find a new hospital";
  }
  cout << "Thank you and come again";
  return 0;
}