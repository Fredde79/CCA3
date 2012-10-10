#include "Data.h"

Data::Data(){
    this->line="";    
}
Data::~Data(){}

void Data::readFile(){
    fstream file;
    char* pch;
    int i;
    file.open("advent.dat", ios::in);
    file.open("advent.dat");
   
    if(file.is_open()){
       
        
        while(!file.eof())
        { 
            getline(file,line);

            pch = strtok ((char*)line.c_str(),"\t\n");
            i = atoi (pch);
           switch(i)
           {
               
               case 1:/*section 1*/
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
                //this->sect1[i].append(pch);
            }
        }
        //cout << line << endl; 
   }
    while(strncmp(line.c_str(), "-1", 2) != 0);
   // cout << this->sect1.at(140);
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