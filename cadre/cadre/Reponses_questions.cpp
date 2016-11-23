/*
Réponses aux questions de cours :
1.	Le rôle d'un constructeur est de réaliser les première initialisation des données membres quand un objet de la classe en question est instancié.
CObject variable() <- Création d'une instance de la classe CObject en faisant appelle à son constructeur.

2.	Le rôle d'un destructeur est d'effectuer les dernière actions avant qu'une instance de la classe en question soit détruite. Il est indispensable
de l'appeler lorsque la classe utilise de l'espace mémoire alloué dynamiquement. En effectuant les vidage mémoire dans le déstructeur, cela garantie
de libérer l'espace lorque l'objet est détruit.

3.	Dans la classe elle même, on peut repérer un constructeur comme étant une méthode de la classe portant le même nom que celle-ci.
Il serait définit de cette manière : namespace_de_la_classe::nom_de_la_classe()
Il peut bien entendu y en avoir plusieurs, tant que la signature est différente, on peut surcharger le constructeur autant de fois que necessaire.
Cela permet de pouvoir initialiser un objet de plusieurs façon, par exemple :
Cobject();
Cobject(int x);					<-------- Chaque constructeur permet d'initialiser plus ou moins de données membres à son appel.
Cobject(int x, int y);

4.	La surdéfinition de fonction est le fait de déclarer plusieur fois une fonction, mais avec une entête différente.

5.	public  signifie que la donnée/méthode sera accessible en dehors de la classe (dans le main par exemple).
private signifie que la donnée/méthode ne sera accessible que dans la classe elle-même ou dans une classe fille.
*/