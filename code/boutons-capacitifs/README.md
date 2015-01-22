# Boutons capacitifs

<img src="IMG_6032.JPG" height="200" width="200" title=""/>
<img src="IMG_6086.JPG" height="200" width="200" title=""/>

Pour permettre de basculer la langue de l'anglais au français en façade du coffre en bois,
sans altérer la laque et la peinture rouge, nous avons imaginé des boutons capacitifs,
collés à l'aide de scotch double face, qui réagissent à un simple effleurement.

L'effleurement est détecté par le sympathique [circuit Ototo](http://www.ototo.fm/products),
qui mesure l'altération de la capacitance sur son bornier. Il livre des signaux Midi sur un
câble USB, qui étaient capturés par l'animation MaxMSP.

Vous trouverez ci-après une description de la construction originale de ces boutons.
Sans doute aurait-il été plus simple de réaliser ces trois boutons avec des composants
prêts à l'emploi avec un cicuit Arduino, tels qu'un [SparkFun Capacitive Touch Sensor Breakout](https://www.sparkfun.com/products/9695)
ou [SparkFun Capacitive Touch Breakout](https://www.sparkfun.com/products/12041).
Comme nous n'avions pas ces composants et avons pris un chemin ingénieux. 

# Construction 

C'était l'occasion de collaborer avec Richard Timsit du FabLab Renens, qui a réalisé
par une découpe laser trois anneaux en bois plat.

<img src="IMG_6024.JPG" height="200" width="200" title=""/>

Nous y avons serti deux électrodes en acier, raccordé un câble en cuivre, puis collé
des morceaux de papier découpé au ciseau, arborant les drapeaux correspondant aux
langues.
