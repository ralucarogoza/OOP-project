# PROJECT 3 OOP
[English](#description)

[Română](#descriere)


### Description

This project simulates the management of a library. It contains classes that represent the following concepts: menu, library, person, subscriber, subscription, premium subscription. I used the concept of template class and design patterns: Sigleton and Repository.
* Singleton - command-line menu
* Repository - Repository class
* Template - Repository class; classes that inherit it are Library and Subscription.

### Menu (Meniu)
This is a command-line menu which has the following options:
1. Display the people subscribed to the library
2. Enter a new subscriber
3. Display the number of subscribers
4. Display the total amount of money received by the library

The user can choose any of the 4 options and any other command will stop the program execution.

### Library (Biblioteca)
This class contains constructors and destructor, operators "=", ">>", "<<" overloaded correspondingly and some functions:
- **addSubscriber** - to add a new subscriber
- **amountCollected** - to find out the total amount collected from customer subscriptions
- **numberOfSubscribers** - to find out the total number of subscribers

### Person (Persoana)
This class contains constructors and destructor, operators "=", ">>", "<<" overloaded correspondingly.

### Subscriber (Abonat)
This class inherits *Person* class. It contains a pointer to an object of type Subscription, since each subscriber can have a subscription that can be normal or premium, and a static variable representing the number of subscribers, it being updated every time a new subscriber is added and is initialized to 0. This class contains constructors and destructor, operators "=", ">>", "<<" overloaded correspondingly and one function:
- **expensesSubscriber** - that calculates the amount a subscriber spends on their subscription.

### Subscription (Abonament)
This class has as private data 3 static variables: period (the number of months), price (the price for a single month) and a maximum number of books that can be borrowed, and a non-static one, an int representing the number of books borrowed (the number of books borrowed must be less than the maximum number of books that can be borrowed). Static variables are initialized with 2, 20, and 15, representing the data of a standard subscription. This class contains constructors and destructor, operators "=", ">>", "<<" overloaded correspondingly and one virtual function:
- **calculateSubscription** - calculates the subscription as the product of price and period.

### PremiumSubscription (Abonament premium)
This class inherits the Subscription class and the difference is that each Subscriber can initially set a number of books to borrow in addition, but for each of these they must pay an additional cost., but for each of these they have to pay an additional cost. This class contains constructors and destructor, operators "=", ">>", "<<" overloaded correspondingly and one function:
- **calculateSubscription** - the same from the parent class, *Subscription*, overridden here so that it returns expenses of one subscriber that are equal to the sum of price * period and costAdditionalBook * booksAdditional.

<br/>
<br/>

### Descriere
Acest proiect simulează gestiunea unei biblioteci. Conține următoarele clase: Meniu, Biblioteca, Persoana, Abonat, Abonament, AbonamentPremium. Am folosit conceptul de clasă template și design patterns: Singleton și Repository.
* Singleton - meniu interactiv
* Repository - clasa Repository 
* Template - clasa Repository, iar clasele care o moștenensc sunt Biblioteca și Subscription.

### Meniu

  Această clasă conține meniul interactiv. Are următoarele opțiuni:
1. Afișați persoanele abonate la bibliotecă
2. Introduceți un nou abonat
3. Afișați numărul de abonați
4. Afișați suma totală încasată de către bibliotecă

  Utilizatorul poate alege orice opțiune dintre cele 4, iar orice altă comandă va opri execuția programului.

### Biblioteca

  Această clasă are ca date private un string care reprezintă denumirea și un vector de abonați. Conține și date publice: constructorii de inițializare și de copiere și destructorul, operatorul "=" și pe cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, setters și getters și 3 funcții: 
- **adaugaAbonat** - pentru a adăuga un abonat nou
- **sumaIncasata** - pentru a afla suma totală încasată din abonamentele clienților
- **numarAbonati** pentru a afla numărul de abonați.

### Persoana

  Această clasă are ca date private 3 string-uri care reprezintă numele, prenumele, numărul de telefon al unei persoane și un int reprezentând vârsta acesteia. Conține și date publice: constructorii de inițializare și de copiere, operatorul "=" și pe cei de citire și afișare ">>", "<<" supraîncărcați corespunzător și setters și getters.

### Abonat

  Această clasă moștenește public clasa Persoana. Ca date private conține un pointer către un obiect de tip Abonament, deoarece fiecare abonat poate avea un abonament care poate fi normal sau premium, și o variabilă statică care reprezintă numărul de abonați, ea fiind actualizată de fiecare data când este adăugat un nou abonat și este inițializată cu 0. Ca date publice conține contructorii de inițializare și de copiere, operatorul "=" și pe cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, un singur getter și o funcție:
- **cheltuieliAbonat** - care calculează suma pe care o cheltuiește un abonat pentru abonamentul de care dispune. 

### Abonament

  Această clasă are ca date private 3 variabile statice: perioada (numărul de luni), pret (prețul pe o singură lună) și un număr maxim de cărți care pot fi împrumutate, și una nestatică, un int care reprezintă numărul de cărți împrumutate (numărul de cărți împrumutate trebuie să fie mai mic decât numărul de maxim de cărți care pot fi împrumutate). Variabilele statice sunt inițializate cu 2, 20 și 15, acestea reprezentând datele unui abonament standard. În această clasă sunt prezenți și constructorii de inițializare și de copiere, operatorul "=" și cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, setters și getters și o funcție virtuală:
- **calculeazaAbonament** - care calculează abonamentul ca fiind produsul dintre preț și perioadă. 

### AbonamentPremium

  Această clasă moștenește public clasa Abonament și diferă de aceasta prin faptul că fiecare Abonat poate să își seteze de la început la abonament un număr de carți pe care să le împrumute în plus, dar pentru fiecare dintre acestea mai trebuie să plătească un cost suplimentar. Clasa conține ca date private un int pentru numărul de carți suplimentare pe care vor să le împrumute abonații care dispun de abonament premium și o variabilă statică costSuplimentarCarte care reprezintă costul pe care aceștia îl plătesc pentru fiecare carte suplimentară. În această clasă se găsesc și constructorii de inițializare și de copiere, operatorul "=" și cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, setters și getters și funcția: 
- **calculeazăAbonament** - aceeași din clasa părinte, *Abonament*, suprascrisă aici astfel încât să returneze cheltuielile abonatului care sunt egale cu suma dintre preț * perioadă și costSuplimentarCarte * carțiAdiționale. 


