/*
R�ponses aux questions de cours :
1.	Le r�le d'un constructeur est de r�aliser les premi�re initialisation des donn�es membres quand un objet de la classe en question est instanci�.
CObject variable() <- Cr�ation d'une instance de la classe CObject en faisant appelle � son constructeur.

2.	Le r�le d'un destructeur est d'effectuer les derni�re actions avant qu'une instance de la classe en question soit d�truite. Il est indispensable
de l'appeler lorsque la classe utilise de l'espace m�moire allou� dynamiquement. En effectuant les vidage m�moire dans le d�structeur, cela garantie
de lib�rer l'espace lorque l'objet est d�truit.

3.	Dans la classe elle m�me, on peut rep�rer un constructeur comme �tant une m�thode de la classe portant le m�me nom que celle-ci.
Il serait d�finit de cette mani�re : namespace_de_la_classe::nom_de_la_classe()
Il peut bien entendu y en avoir plusieurs, tant que la signature est diff�rente, on peut surcharger le constructeur autant de fois que necessaire.
Cela permet de pouvoir initialiser un objet de plusieurs fa�on, par exemple :
Cobject();
Cobject(int x);					<-------- Chaque constructeur permet d'initialiser plus ou moins de donn�es membres � son appel.
Cobject(int x, int y);

4.	La surd�finition de fonction est le fait de d�clarer plusieur fois une fonction, mais avec une ent�te diff�rente.

5.	public  signifie que la donn�e/m�thode sera accessible en dehors de la classe (dans le main par exemple).
private signifie que la donn�e/m�thode ne sera accessible que dans la classe elle-m�me ou dans une classe fille.
*/