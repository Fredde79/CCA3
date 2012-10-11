#include "Data.h"

Data::Data(){
    this->line="";  
    this->locations=new vector<Location*>();
    this->traveltables= new vector<TravelTable*>();
    this->vocabulary=new vector<Vocabulary*>();
    this->messages=new vector<Message*>();
    this->magicmsgs=new vector<MagicMsg*>();
    this->classmsgs=new vector<ClassMsg*>();
    this->hints=new vector<Hint*>();
    //this->readFile();
}
Data::~Data(){
/**avallokera alla vectorer*/
    for(int i=0; i<this->locations->size(); i++)
        delete this->locations->at(i);
    delete this->locations;
    
    for(int i=0; i<this->traveltables->size(); i++)
        delete this->traveltables->at(i);
    delete this->traveltables;
    
    for(int i=0; i<this->vocabulary->size(); i++)
        delete this->vocabulary->at(i);
    delete this->vocabulary;
    
    for(int i=0; i<this->messages->size(); i++)
        delete this->messages->at(i);
    delete this->messages;
    
    for(int i=0; i<this->magicmsgs->size(); i++)
        delete this->magicmsgs->at(i);
    delete this->magicmsgs;
    
    for(int i=0; i<this->classmsgs->size(); i++)
        delete this->classmsgs->at(i);
    delete this->classmsgs;
    
    for(int i=0; i<this->hints->size(); i++)
        delete this->hints->at(i);
    delete this->hints;
}

void Data::readFile(){
    fstream file;
    char* pch;
    int i;
    file.open("advent.dat", ios::in);
   
    if(file.is_open()){
       
        
        while(!file.eof())
        { 
            getline(file,line);

            pch = strtok ((char*)line.c_str(),"\t\n");
            i = atoi (pch);
           switch(i)
           {
               
               case 1:/*section 1*/
                   cout << "\n section 1 \n";
                this->sectionOne(file);
                break;
                
              case 2:/*section 2*/
                   this->sectionTwo(file);
              break;
              
               case 3:/*Section 3*/
                this->sectionThree(file);
                break;
                   
               case 4:/* Section 4 - VOCABULARY*/
                   this->sectionFour(file);
                  // cout << "\n test case 4 \n";
                   break;
               case 5:
                  // this->sectionFive(file);
                   break;
                   
                
                  
           }
        }
       file.close();
    }
        
    else{       cerr << "could not open file";}
}
void Data::sectionOne(fstream& file){
    char buffer[1024];
    char* pointer = buffer;
    char *pch;
    int i=0;
   Location *current=NULL;
   do
   {
        buffer[0]  = 0;
        getline(file, line);
        strncpy(pointer, line.c_str(), 1024);
        pch = strtok(pointer,"\t");
        i=atoi(pch);
        
        if(i > 0)
        {
            pch = strtok(NULL,"\t");
            
            if(pch != NULL)
            {
                current=new Location(i, pch);
                //cout << current->toString();
                
                
                /*this->locations->at(i) = current;
                if(i == this->locations->at(i)->getNumber())
                {
                //append
                    this->locations->at(i)->appendLongDesc(pch);
                }
                //remove current
                current=NULL;
                */
            }
        }
   }
    while(strncmp(line.c_str(), "-1", 2) != 0);
    cout << current->toString();
    /*
    for (int i = 0; i < this->locations->size(); i++) {
        cout << this->locations->at(i)->toString() << endl;
    }*/
}
void Data::sectionTwo(fstream& file){
    
    char buffer[1024];
    char* pointer = buffer;
    char *pch;
    int i=0;
    
   do
   {
        buffer[0]  = 0;
        getline(file, line);
        strncpy(pointer, line.c_str(), 1024);
        pch = strtok(pointer,"\t");
        i=atoi(pch);
        if(i > 0)
        {
            pch = strtok(NULL,"\t");
            if(pch != NULL)
            { 
                //this->sect2[i].append(pch);
            }
            
        }
        //cout << line << endl; 
   }
    while(strncmp(line.c_str(), "-1", 2) != 0);
    //cout << this->sect2.at(130);
}
void Data::sectionThree(fstream &file){
    
    char buffer[1024];
    char* pointer = buffer;
    char *pch;
    int i=0;
    
   do
   {
        buffer[0]  = 0;
        getline(file, line);
        strncpy(pointer, line.c_str(), 1024);
        pch = strtok(pointer,"\t");
        i=atoi(pch);
        if(i > 0)
        {
            pch = strtok(NULL,"\n");
            if(pch != NULL)
            { 
                //this->sect3[i].append(pch);   
            }
            
        }
        //cout << line << endl; 
   }
    while(strncmp(line.c_str(), "-1", 2) != 0);
    //cout << this->sect3.at(1);
}
void Data::sectionFour(fstream &file){
    
    char buffer[1024];
    char* pointer = buffer;
    char *pch;
    int i=0;
    
   do
   {
        buffer[0]  = 0;
        getline(file, line);
        strncpy(pointer, line.c_str(), 1024);
        pch = strtok(pointer,"\t");
        i=atoi(pch);
        if(i > 0)
        {
            pch = strtok(NULL,"\n");
            if(pch != NULL)
            { 
                //this->sect4[i].append(pch);   
            }
            
        }
        //cout << line << endl; 
   }
    while(strncmp(line.c_str(), "-1", 2) != 0);
   // cout << this->sect4.at(2);
   
}
void Data::sectionFive(fstream &file){
    
    char buffer[1024];
    char* pointer = buffer;
    char *pch;
    int i=0;
    
   do
   {
        buffer[0]  = 0;
        getline(file, line);
        strncpy(pointer, line.c_str(), 1024);
        pch = strtok(pointer,"\t");
        i=atoi(pch);
       
        if(i > 0)
        {
            pch = strtok(NULL,"\n");
            if(pch != NULL)
            { 
               // (*(Object_desc*)sect5[i]).setInventory(pch);
                //this->sect5[i].append(pch);     
                 //(Object_desc)this->sect5
                if(i == 000)
                {
                    /*
                    if(!(*(Object_desc*)sect5[i]).getMessage(0))
                    {
                        string tmp=(*(Object_desc*)sect5[i].getMessage(0));
                        tmp.append(line);
                        (*(Object_desc*)sect5[i].setMessage(0,tmp));
                    }
                    (*(Object_desc*)sect5[i]).setMessage(0,line);
                */
                 }
            }
            
        }
   }
    while(strncmp(line.c_str(), "-1", 2) != 0);
  //cout << this->sect5.at(5);
}