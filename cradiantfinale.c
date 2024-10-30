//Please play the game before looking into the code to ensure fair play.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
struct enemy
{
	int ehp;
 	int eatt;
}waiba,swap,sat;
void stage1();
int battle1();
void stage2();
int battle2();
void stage3();
int battle3();
void stage4();
static char name[50];
int death;
char preface()
{
	printf("Hi there!");
	printf("\n<press enter key>");getchar();
	printf("Hmmm. This looks pretty small. You should enter fullscreen and zoom in a bit."); getch();
	printf("\nAnyways,");getch();
	printf("\nWelcome to CRadiant!");getch();
	printf("\nA text based RPG made by three bois you shouldn't know."); getch();
	printf("\nBut you should be! What's your name?");
	printf("\n\t Enter your name:");
	scanf("%s",name);
	printf("\nHello %s (^_^)",name);getch();
	printf("\nYour unforgettable adventure is about to begin!");getch();
	printf("\nHave fun. Lets go!");getch();
	system("cls");
}
int main()
{
	preface();
	printf("\n%s:",name);
	printf("\nHmmm"); getch();
	printf("\nhuuuuuuuuuuuuuuuummm........"); getch();
	printf("\nThe deadline is tomorrow..."); getch();
	printf("\n<yawn>And I haven't even started my computer project."); getch();
	printf("\nWell it's totally normal - for me at least."); getch();
	printf("\nI'm going to start it right n-"); getch();
	printf("\t zzzzzzzzzzz..<snorr>"); getch();
	printf("\n<%s sleeps the entire night>",name);getch();
	printf("\nzzzzz......."); getch();
	printf("!"); getch(); printf("!!oh!"); getch(); printf("Oh nooo!!!"); getch();
	printf("\nI DOZED OFF LAST NIGHT (O_O;).Now this is a problem.");getch();
	printf("\nMy teacher is gonna give me 0.");getch();
	printf("\nMy friends are gonna KILL me. I promised them to complete 'em on time.");getch();
	printf("\n<knock knock>");getch();
	printf("\n%s:<gulp>",name);getch();
	system("cls");
	stage1();
	system("cls");

}
void stage1()
{
	printf("\nSomebody:Oi %s,it's me!Waiba!",name);getch();
	printf("\nWaiba:Open the door.");getch();
	printf("\n<knock knock knock knock>");getch();
	printf("\n%s:<Oh no. What am I gonna say?>",name);getch();
	printf("\nSLAMMM!!!!<Waiba breaks the door>");getch();
	printf("\n%s:WAIBA YOU JUST BROKE MY-",name);getch();
	printf("\nWaiba:SHUTUP!! We are late already.");getch();printf("Don't you know we have project to submit?");getch();
	printf("\n%s:I'm so sorry Waiba. But I...",name);getch();
	printf("\nWaiba:Don't tell me,you...",name);getch();
	printf("\n%s:I'm sorry. It couldn't be helped.",name);getch();
	printf("\n\t<gulp>I haven't even started the project yet.(T_T)");getch();
	printf("\n<Waiba's eyes turn red.>");getch();
	printf("\n<His teeth become fangs and palms become claws>");getch();
	printf("\n%s:Now this is totally a mess.",name);getch();
	printf("\n<Waiba hits you with his claws. You lose 10 hp>");
	printf("\n%s:Ouch.",name);getch();	printf("I've had enough.");getch();
	printf("\n\tFirst my door and now me.");getch();printf("I'll give this guy the taste of my punches!!!");getch();
	system("cls");
	battle1();
 }
int battle1()
{
	battle1start:
 	printf("BATTLE START//%s vs Beast Waiba\\\\",name);
 	printf("\n<Press any key to commence!>");getch();
 	system("cls");
 	int hp=90,ap=25,att=10,spatt=50,rnd=1,def=0,ra=5;
	char c;
 	waiba.ehp=80;
	waiba.eatt=20;
	do{

  if(c=='s'&&ap>=100){
			printf("You launched a super attack: SUPERMAN PUNCH!!!");
			printf("\nWaiba took 50 damage");
			ap=0;
   waiba.ehp-=50;
  }
  	else if(c=='s'&&ap<100){
			printf("Need 100 AP.");
  			printf("\nSelect another command");
			ra=5;
			ap-=25;
			goto atkpsn;
		}
		else if(c=='a'){
  			printf("You launched a punch!");
			printf("\nWaiba took 10 damage");
			waiba.ehp-=10;
		}
		else if(c=='d'){
		printf("You entered defensive stance");
		def=1;
	}
		else{
			printf("press 'a','s' or 'd' for respective commands!");
			ra=5;
			ap-=25;
			goto atkpsn;
		}
		if(waiba.ehp<=0){break;}
		if (ra==1)
		{
			printf("\nWaiba launched clawdrive!");
			if(def==1){
				printf("\nYou blocked Waiba's attack");
			}
			else{
			printf("\nYou took 10 damage");
			hp-=10;}
		}
		else if(ra==0){
			printf("\nWaiba launched hyperfang!");
			if(def==1){
				printf("\nYou couldn't block Waiba's attack");
				printf("\nYou took 20 damage");
				hp-=20;
		}
		else{
			printf("\nYou took 20 damage");
			hp-=20;
		}
		}
		atkpsn:
		def=0;
		if(hp<=0){
			printf("\nYour hp:%d",hp);getch();
  			system("cls");
			printf("\nYOU DIED");getch();
			death+=1;
			printf("\nDeath count:%d",death);
			printf("\n<press any key to restart battle>");getch();
			system("cls");
			goto battle1start;
		}
		printf("\n\n\nWaiba's HP:%d\t\t Your HP:%d \t Your AP:%d",waiba.ehp,hp,ap);
		printf("\na:Attack\ts:Super  \td:Defend\n");
		c=getch();
		printf("\n\n%c",c);
  		if(ap<100){ap+=25;}
		system("cls");
		ra=rand()%2;
		}while(waiba.ehp>0);
	printf("\nWaiba fainted.\nWaiba's physique turned back to normal");
	stage2();
}
void stage2()
{
	printf("\nI feel bad for Waiba.");getch();
	printf("\nI must report this to someone.");getch();
	printf("\nI must go out and seek help at once!");getch();
	system("cls");
	printf("\n<%s goes out>",name);getch();
	printf("\n<Swapnil passes by>");getch();
	printf("\n%s:Hey Swapnil!!",name);getch();printf("I need your help. Waiba's life is in danger.");getch();
	printf("\nSwapnil:I'm sorry. But I got no time to deal with your pranks right now");getch();
	printf("\n%s:I am serious.",name);getch();printf("Come on, hurry!");getch();
	printf("\nSwapnil:You little!!!");getch();printf("I'll end you right here and now.");getch();
	printf("\n%s:Huh, What do you m-",name);getch();
	printf("\n<Swapnil's eyes turn red>");
	printf("\n<His ..>");getch();printf("<Well,nothing happens>");getch();
	printf("\n%s:(His eyes turned red.Does that mean he's hostile? Like Waiba!?)",name);getch();
	printf("\n%s:(Whatever the case, I must be on my guard)",name);getch();
	battle2();
}
int battle2()
{
	system("cls");
	battle2start:
 	printf("\nBATTLE START//%s vs Redeye Swapnil\\\\",name);
 	printf("\n<Press any key to commence!>");getch();
 	system("cls");
 	printf("\nSwapnil launched kick!");getch();
 	printf("\nYou took 1 damage");getch();
 	printf("\nSwapnil:Damn..");getch();
 	printf("\n%s:(I only took 1 damage? This guy sure is weak.)\n",name);getch();
 	int hp=99,ap=25,spatt=1,temp=0,rnd=1,def=0,ra=5;
	char c;
 	swap.ehp=100;
	swap.eatt=1;
	do{
  	if(c=='s'&&ap>=100){
			printf("You launched a super attack: SUPERMAN PUNCH!!!");
			printf("\nSwapnil took 50 damage");
			ap=0;
  	 swap.ehp-=50;
  }
  	else if(c=='s'&&ap<100){
			printf("Need 100 AP.");
  			printf("\nSelect another command");
			ra=5;
			ap-=25;
			goto atkpsn;
		}
		else if(c=='a'){
  			printf("You launched a punch!");
			printf("\nSwapnil took 10 damage");
			swap.ehp-=10;
		}
		else if(c=='d'){
		printf("%s:I gotta hurry. This guy doesnt hit hard",name);
		printf("\nSelect another command!");
		ra=5;
		ap-=25;
		goto atkpsn;
	}
		else{
			printf("press 'a','s' or 'd' for respective commands!");
			ra=5;
			ap-=25;
			goto atkpsn;
		}
		if(swap.ehp<=50&&spatt==1){
		printf("\nSwapnil:This pain, I can bear no more!");getch();
		printf("\nSwapnil:Time to show my special attack!");getch();
		printf("\nSwapnil used SWAP!!");getch();
		printf("\nYour hp got swapped");getch();
		temp=swap.ehp; swap.ehp=hp;hp=temp;
		printf("\n\n\nSwapnil's HP:%d\t\t Your HP:%d \t Your AP:%d",swap.ehp,hp,ap);
		printf("\n\n%s:This is bad!",name);getch();
		printf("\nSwapnil:Sure! IT IS!!Mwahahahahahaha..");getch();
		printf("\nSwapnil:Now take this!");getch();
		printf("\nSwapnil launched flying kick!");
		printf("\nYou took 7 damage");
		hp-=7;
		spatt=0;
		goto atkpsn;
		}
		if(swap.ehp<=0){break;}
		if (ra==1)
		{
			printf("\nSwapnil launched punch!");
			printf("\nYou took 1 damage");
			hp-=1;}
		else if(ra==0){
			printf("\nSwapnil launched kick!");
			printf("\nYou took 2 damage");
			hp-=2;
		}
		atkpsn:
		def=0;
		if(hp<=0){
			printf("\nYour hp:%d",hp);getch();
  			system("cls");
			printf("\nYOU DIED");getch();
			death+=1;
			printf("\nDeath count:%d",death);
			printf("\n<press any key to restart battle>");getch();
			system("cls");
			goto battle2start;
		}
		printf("\n\n\nSwapnil's HP:%d\t\t Your HP:%d \t Your AP:%d",swap.ehp,hp,ap);
		printf("\na:Attack\ts:Super  \td:Defend\n");
		c=getch();
		printf("\n\n%c",c);
  		if(ap<100){ap+=25;}
		system("cls");
		ra=rand()%2;
		}while(swap.ehp>0);
	printf("\nSwapnil was defeated.");getch();printf("He flew away.");getch();
	system("cls");
	stage3();
}
void stage3()
{
	printf("\n%s:What a waste of such incredible power.",name);getch();
	printf("\n%s:This is getting very, very strange.",name);getch();
	printf("\n%s:I can only trust one person now and he is..",name);getch();printf("Satyendra sir himself!");getch();
	printf("\n%s:I'm heading to him. Right now!",name);getch();
	printf("\n<%s goes to Satyendra Sir's office>",name);getch();
	printf("\n<Satyendra Sir looks at %s as if he had been waiting>",name);getch();
	printf("\nSatyendra:You're finally here. I have been waiting.");getch();
	printf("\nSatyendra:I see, you've knocked out both Waiba and Swapnil. You must be good.");getch();
	printf("\n%s:It wasn't intentional, sir. I was forced to-",name);getch();
	printf("\nSatyendra:It is how everything works, my dear.");getch();printf("\n\t Survival of the fittest is a harsh rule of nature.");getch();
	printf("\n%s:But they are my friends. I cannot endure anymore. Something really bad must have happened.",name);getch();
	printf("\nSatyendra:Is that so? Then I'll let you know in advance that the time has come!",name);getch();
	printf("\n%s:Don't tell me....This can't be....(O_O;)",name);getch();
	printf("\n<Satyendra's eyes turn green>",name);getch();
	printf("\nSatyendra:I challenge you for a duel!!!\n",name);getch();
	battle3();
}
int battle3()
{
	system("cls");
 	printf("BATTLE START//%s vs Enlightened Satyendra\\\\",name);
 	printf("\n<Press any key to commence!>");getch();
 	printf("\n%s:Your eyes are green. It's different from the rest.",name);getch();
 	printf("\nSatyendra: Hahahaha.");getch();
 	printf("\n\t Son! The more you understand programming,"); getch();printf(" the better the control of your body!!",name);getch();
 	printf("\n%s:Huh! I don't get it.",name);getch();
 	printf("\nSatyendra: Listen! Dear little one...");getch();printf("For I am your master and you are my student.",name);getch();
 	printf("\n%s: Yessir!!(Amazing, he still has full control on his mind)",name);getch();
 	printf("\nSatyendra: And as a student, you must overcome whatever challenge I throw at you!");getch();
 	printf("\n\t HERE I COME!!");getch();
 	printf("\n//Get ready for final battle\\\\");getch();
 	system("cls");
 	int hp=100,ap=25,att=10,spatt=50,incorrect=0,def=0,ra=5;
	char c;
	sat.eatt=0;
	printf("\nYour hp:%d",hp);
	printf("\nSystem: Round 1: Question round.");
	printf("\n\t Answer the questions correctly to avoid incoming attacks.");
	printf("\n\t You cannot attack in this battle.");getch();
	system("cls");
	printf("\nSatyendra: Question 1\n\t\tWho is the inventor of C++?");
	printf("\na.Dennis Ritchie\tb.Bjarne Stroustrup\nc.Kenn Thompson\t\td.Guido van Rossum");
	qn1:
	c=getch();
	if(c=='b'){
		printf("\nSatyendra launched METEOR HAMMER!");
		printf("\nYou evaded the attack.");
		printf("\nIt was the correct answer!");
	}
	else if(c=='a'||c=='c'||c=='d'){
		printf("\nSatyendra launched METEOR HAMMER!");
		printf("\nYou took 20 damage");
		printf("\nYour answer was invalid.");
		hp-=20;
	}
	else{
		printf("\nEnter a valid command.");
		goto qn1;
	}
	getch();
	system("cls");
	printf("\nSatyendra: Question 2\n\t\tWhich gunction is used to read the input from console?");
	printf("\na.scanf()\tb.getchar()\nc.putchar()\td.None");
	qn2:
	c=getch();
	if(c=='a'){
		printf("\nSatyendra launched E.M.P!");
		printf("\nYou evaded the attack.");
		printf("\nIt was the correct answer!");
	}
	else if(c=='b'||c=='c'||c=='d'){
		printf("\nSatyendra launched E.M.P!");
		printf("\nYou took 20 damage");
		printf("\nYour answer was invalid.");
		hp-=20;
	}
	else{
		printf("\nEnter a valid command.");
		goto qn2;
	}
	getch();
	system("cls");
	printf("\nSystem:The Question round is over.");
	printf("\nYour hp:%d",hp);
	printf("\nSystem:Drill round is next.\nSatyendra: Are you ready, little one?");getch();
	printf("\nSatyendra launched TIMED GRENADES at you!!");
	printf("\nAnswer correctly as fast as possible to dodge the bombs.\nA timer will start after you press a key.\nPress key when you're ready!");getch();
	system("cls");
	clock_t before=clock();
	printf("\nWhat alphabet comes before 'q'?");
	c=getch();
	if(c!='p'){incorrect+=1;hp-=10;}
	system("cls");
	printf("\nWhich alphabet is formed if 'o' is horizontally flipped?");
	c=getch();
	if(c!='o'){incorrect+=1;hp-=10;}
	system("cls");
	clock_t diff=clock()-before;
	printf("\nYou got hit by %d bombs each dealing 2 damage.\n%d Bombs detonated each dealing 10 damage.",diff/1000,incorrect);
	printf("\n(It took you %d seconds and %d of your answers were wrong.)",diff/1000,incorrect);
	printf("\nYou lost %d hp",(incorrect*10)+(2*diff/1000));
	hp-=(2*diff/1000);
	if(hp<=0){hp=1; printf("A mysterious shield protected you from reaching 0 hp");}
	printf("\nYour current hp:%d",hp);
	printf("\n<press any key to continue>");getch();
	system("cls");
	printf("\nSatyendra:Impressive. You're still holding your ground. Just as I expected from my student.");getch();
	printf("\nSatyendra:Hmm..");getch();printf("Now I will launch my final attack.");getch();
	printf("\nSatyendra:But first,I will ask you a very important question.");getch();
	printf("\nSatyendra:If you answer it correct I will return everything back to normal and let you live.");getch();
	printf("\nSatyendra:But if you get it wrong, I'm very sorry that your journey will have to end.");getch();
	printf("\nSatyendra:ARE YOU READY?");getch();
	system("cls");
	printf("\nSatyendra:\nSo..");getch();
	printf("\nWhat is the most important thing a teacher expects from his/her students?");getch();
	printf("\na.love\t b.respect c.\ttrust");
	enter:
	c=getch();
	if(c=='a'){
		printf("\nSatyendra:\nI am very dissapointed but your answer is wrong.");getch();
		printf("\nLove sure is one of the greatest things in life but..");getch();
		printf("\nIndeed, I do love you but just loving me will not lead you to success..");getch();
		printf("\nAnd it's for your success that I am here.");getch();
		printf("\nPlease forgive me, dear child.");getch();
		printf("\n\nSatyendra Sir used SUN STRIKE!");
		printf("\nYou took 999 damage");getch();
		}
	else if(c=='b'){
		printf("\nSatyendra:\nI am very dissapointed but your answer is wrong.");getch();
		printf("\nRespect sure is one of the things I expect but..");getch();
		printf("\nThe truth is, it only determines how we bahave with each others from the outside.");getch();
  		printf("\nIt doesn't change much in the inside.  And the inside is what it matters the most.");getch();
		printf("\nPlease forgive me, dear child.");getch();
		printf("\n\nSatyendra Sir used SUN STRIKE!");
		printf("\nYou took 999 damage");getch();
		}
	else if(c=='c'){
		printf("\nSatyendra:\nI am very dissapointed but your answer is wrong.");getch();
		printf("\nTrust sure is one of the the most important things in the world but..");getch();
		printf("\nTrust is a very fragile thread that you cannot depend upon.");getch();
  		printf("\nYou may trust me now, but I am only a human and can easily get wrong.");getch();
		printf("\nEven the greatest masters are only but eternal students.");getch();
		printf("\nPlease forgive me, dear child.");getch();
		printf("\n\nSatyendra Sir used SUN STRIKE!");
		printf("\nYou took 999 damage");getch();
		}
	else{goto enter;}
	printf("<Your eyes slowly closed>");getch();
	system("cls");
	stage4();
}
void stage4()
{
	printf("\n%s:Where am I?",name);getch();
	printf("\n%s:What is this place?",name);getch();
	printf("\nSatyendra:You're in the Radiant,child. A place where dreams and realities meet.");getch();
	printf("\n%s:Sir? You still there?",name);getch();
	printf("\n<you get no response. It's all silence>");getch();
	printf("\n%s:I just wanted to know..",name);getch();
	printf("\n\t the answer of your last queston...");getch();printf("Before it's over...?");getch();
	printf("\nSatyendra:Listen carefully, dear one,");getch();
	printf("\n\tThe most important thing that every person you will meet in your life is...");getch();
	printf("\n\tDiscipline");getch();
	printf("\n\tIt is only discipline that leads you to success.");getch();
	printf("\n\tIt is only discipline that will enable you to survive in this harsh world.");getch();
	printf("\n\tAnd finally.....");getch();
	printf("\n\tIt is only discipline that makes you WHO YOU ARE.");getch();
	printf("\n%s:I finally get it now.",name);getch();
	printf("\n%s:Thank you..",name);getch();printf("everyone...");getch();printf("whom I had the chance to meet in my life...");getch();
	printf("\n<Everything around you starts fading away>");getch();
	system("cls");
	printf("\n!");getch();
	printf("\n<%s wakes up>",name); getch();
	printf("\n%s:Oh! Was it only a dream?",name);getch();
	printf("\n\tOh no.",name); getch();printf("Its morning already.",name); getch();printf("And my homework is as it was.",name); getch();
	printf("\n\t What am I gonna say to my friends and teachers.?",name); getch();
	printf("\n<knock knock>");getch();
	printf("\nSomebody:Oi %s,it's me!Waiba!",name);getch();
	printf("\nWaiba:Open the door.");getch();
	printf("\n%s:<gulp>",name);getch();
	system("cls");
	printf("End of the story.\n");
	printf("You died %d times.\n",death);
	printf("Hope uou enjoyed.");
}
