# Qt_abalone
 Jeu de l'Abalone en C++ et Qtcreator

Travaux Pratique Développement de composants logiciels

Outils langages
QT/c++ qtcreator
Public:
2ième année BTS SIO
Contexte du TP
jeu abalone
Dans un premier temps nous allons faire apparaître le plateau du jeu.

Consignes:
Trouver la forme du plateau: hexagonale.
Le nombre de billes de chaque joueur 14 billes (2 joueurs)
Au niveau des couleurs on prendra bleu et rouge à la place de blanc et noir
les billes seront des QPushButton auxquels on donnera des icônes:
(bleu select)(rouge select) 
Chaque emplacement de la grille sera soit vide soit contiendra une bille.
Une bille sélectionnée sera plus lumineuse qu’une bille non sélectionnée.
voilà pourquoi vous avez 4 icônes.
Les icônes seront placées dans un fichier ressource nommé mesRessources.qrc

Ils seront placés dans une QGridLayout de Quelle dimension?
9 lignes
et 17 colonnes

Règles du jeu: 
règles
On peut avancer de 1 à 3 billes alignées
l’avancée est au maximum d’une case.
L’objectif est de sortir les billes de l’adversaire du plateau.
Pour ce faire, on utilise nos billes en prenant en compte la “force du nombre” ex : 3 billes sont plus fortes que 2.
La partie se termine lorsqu’un des 2 joueurs a sorti 6 billes de son adversaire.
TAF:
Finir le plateau (pour ceux qui n’ont pas fini)
Pour avancer je vous propose de travailler sur la sélection/déselection des boutons
c'est l'image qui changera. 







