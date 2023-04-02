class Person{
  String name;
  int age;
  String sex;
  
  Person(this.name, this.age, this.sex){
    //
  }
  }

class Criminalrecord extends Person{
  String criminalrecord;
  Criminalrecord(String name, int age, String sex, this.criminalrecord) : super(name, age, sex){
    //
  }
  
  void records(){
    if (criminalrecord == 'A'){
      print('${name}, ${age}, ${sex} Record is positive');
    }
    else if (criminalrecord == 'B'){
      print('${name}, ${age}, ${sex} Record is negarive');
    }
  }
}


class Medicalrecord extends Person{
  String medicalrecord;
  Medicalrecord(String name, int age, String sex, this.medicalrecord) : super(name, age, sex){
    //
  }
  
  void records(){
    if (medicalrecord == 'A'){
      print('${name}, ${age}, ${sex} Medical record detected');
    }
    else if (medicalrecord == 'B'){
      print('${name}, ${age}, ${sex} No medical record detected');
    }
  }
}
void printPerson (Person person){ // Can't use print as a function name.
  print ('&{person.name}, &{person.age}, &{person.sex}'); // Use &{}
}

void main() {
//   Person person1 = Person('Abebe', 34, 'M');
//   printPerson (person1);
  
  Criminalrecord person1 = Criminalrecord('Abebe', 34, 'M', 'B');
  person1.records();
  
  Medicalrecord person2 = Medicalrecord('Betty', 28, 'F', 'A');
  person2.records();
    
}
