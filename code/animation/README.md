# Animation MaxMSP

Le coeur de l'installation est une animation interactive réalisée avec [MaxMSP](https://cycling74.com/products/max/) par Jérémie Forge ([Atelier Hemisphère](http://www.hemisphere-project.com/)), de l'équipe du Guichet des Technologies de Museomix Léman 2014.

## Présentation

### Etats de l'animation

Cette animation possède 3 états:

* un mode _jour_, dans lequel elle présente une oeuvre du musée, immobile, silencieuse, avec des indications sur l'exposition en cours au musée; elle est semblable à une affiche imprimée
* un mode _nuit passif_, où elle présente une oeuvre du musée dans une animation silencieuse, énigmatique, qui invite les passants à la curiosité (un portrait en négatif, sur fond de voûte étoilée qui tourne dans notre proposition)
* un mode _nuit actif_, déclenché lorsqu'un passant s'approche à moins de 1.50 m du dispositif, dans lequel l'oeuvre prend vie, s'anime et interpelle ce passant.

Elle possède de plus 2 états internes à l'état _nuit actif_:

* séquence vidéo en _français_
* séquence vidéo en _anglais_

### Transition entre les états

* l'animation passe de l'état _jour_ à l'état _nuit passif_, lorsque l'on effleure le bouton capacitif servant à déclencher cette transition; dans une version définitive, cette transition se déclencherait automatiquement, à la nuit tombée;
* elle passe des états _nuit passif_ et _nuit actif_ à l'état _jour_, lorsque l'on effleure à nouveau le bouton capacitif qui permet cette bascule;
* elle passe de l'état _nuit passif_ à l'état _nuit actif_, lorsque le dispositif détecte une présence à une distance de moins de 1.50 m.
* lorsque l'animation est dans l'état _nuit actif_, il est possible de basculer entre deux états internes, _français_ et _anglais_, en effleurant les deux boutons capacitifs en façade, qui permettent le choix de la langue.

## Les séquences vidéo

Sont disponibles dans le dossier [Google Drive de Museomix Leman](https://drive.google.com/drive/#folders/0B3Q4jqRazJwDd2FEOXFWeWNHVGM/0B6MJiDb9PY-7Q19Ic3F2a3VLZms/0B6MJiDb9PY-7OVRnQWZlX2FnaDA):

* [scenario_EN.mov](https://docs.google.com/file/d/0B6MJiDb9PY-7TVhrOXd5UERKMXc/edit) 313MB
* [scenario_FR.mov](https://docs.google.com/file/d/0B6MJiDb9PY-7Z0lDWEJPc0hSZWs/edit) 313MB
* [wait_day.mov](https://docs.google.com/file/d/0B6MJiDb9PY-7dF9BYVZyank3Sms/edit) 24MB
* [wait_night.mov](https://docs.google.com/file/d/0B6MJiDb9PY-7WmdQRHFVMVdBVXc/edit) 866MB

Les séquences présentes dans ce référentiel GitHub sont des vidéos d'exemple de taille réduite, qui étaient utilisées pendant le développement, mais ne correspondent pas à celles du dispositif présenté. GitHub restreint en effet la [taille max. des fichiers à 100MB](https://help.github.com/articles/what-is-my-disk-quota/) et la [taille du référentiel à 1GB](https://help.github.com/articles/what-is-my-disk-quota/); comme ces limites sont dépassées par nos fichiers vidéo, elles ont été placées sur Google Drive.
