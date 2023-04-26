# PROIECT 3 POO
Acest proiect simulează gestiunea unei biblioteci. Conține următoarele clase: Meniu, Biblioteca, Carte, Persoana, Abonat, Abonament, AbonamentPremium, Repository.
Am folosit conceptul de clasă template și design patterns: Singleton și Repository.
* Singleton - meniu interactiv
* Repository - clasa Repository 
* Template - clasa Repository, iar clasele care moștenesc din ea sunt Biblioteca și Abonamente.


### Clasa Meniu 

  Această clasă conține meniul interactiv. Are următoarele opțiuni:
1. Afișați persoanele abonate la bibliotecă
2. Introduceți un nou abonat
3. Afișați numărul de abonați
4. Afișați suma totală încasată de către bibliotecă

  Utilizatorul poate alege orice opțiune dintre cele 4, iar orice altă comandă va opri execuția programului.

### Clasa Biblioteca

  Această clasă are ca date private un string care reprezintă denumirea și un vector de abonați. Conține și date publice: constructorii de inițializare și de copiere și destructorul, operatorul "=" și pe cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, setters și getters și 3 funcții: prima (adaugaAbonat) pentru a adăuga un abonat nou, a doua (sumaIncasata) pentru a afla suma totală încasată din abonamentele clienților și a treia (numarAbonati) pentru a afla numărul de abonați.

### Clasa Persoana

  Această clasă are ca date private 3 string-uri care reprezintă numele, prenumele, numărul de telefon al unei persoane și un int reprezentând vârsta acesteia. Conține și date publice: constructorii de inițializare și de copiere, operatorul "=" și pe cei de citire și afișare ">>", "<<" supraîncărcați corespunzător și setters și getters.

### Clasa Abonat

  Această clasă moștenește public clasa Persoana. Ca date private conține un pointer către un obiect de tip Abonament, deoarece fiecare abonat poate avea un abonament care poate fi normal sau premium, și o variabilă statică care reprezintă numărul de abonați, ea fiind actualizată de fiecare data când este adăugat un nou abonat și este inițializată cu 0. Ca date publice conține contructorii de inițializare și de copiere, operatorul "=" și pe cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, un singur getter și o funcție (cheltuieliAbonat) care calculează suma pe care o cheltuiește un abonat pentru abonamentul de care dispune. 

### Clasa Abonament

  Această clasă are ca date private 3 variabile statice: perioada (numărul de luni), pret (prețul pe o singură lună) și un număr maxim de cărți care pot fi împrumutate, și una nestatică, un int care reprezintă numărul de cărți împrumutate (numărul de cărți împrumutate trebuie să fie mai mic decât numărul de maxim de cărți care pot fi împrumutate). Variabilele statice sunt inițializate cu 2, 20 și 15, acestea reprezentând datele unui abonament standard. În această clasă sunt prezenți și constructorii de inițializare și de copiere, operatorul "=" și cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, setters și getters și o funcție virtuală care calculează abonamentul ca fiind produsul dintre preț și perioadă. 

### Clasa AbonamentPremium

  Această clasă moștenește public clasa Abonament și diferă de aceasta prin faptul că fiecare Abonat poate să își seteze de la început la abonament un număr de carți pe care să le împrumute în plus, dar pentru fiecare dintre acestea mai trebuie să plătească un cost suplimentar. Clasa conține ca date private un int pentru numărul de carți suplimentare pe care vor să le împrumute abonații care dispun de abonament premium și o variabilă statică costSuplimentarCarte care reprezintă costul pe care aceștia îl plătesc pentru fiecare carte suplimentară. În această clasă se găsesc și constructorii de inițializare și de copiere, operatorul "=" și cei de citire și afișare ">>", "<<" supraîncărcați corespunzător, setters și getters și funcția "calculeazăAbonament", aceeași din clasa părinte, "Abonament", suprascrisă aici astfel încât să returneze cheltuielile abonatului care sunt egale cu suma dintre preț * perioadă și costSuplimentarCarte * carțiAdiționale. 
