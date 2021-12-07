import json

with open('map.json') as f:
    data = json.load(f)

map_x = input('Coordonné X (0-2): ')
map_x = int(map_x)
map_y = input('Coordonné y (0-2): ')
map_y = int(map_y)

nombre = input('Nombre d\'objets: ')
nombre = int(nombre)

h = open('map.h', 'a')

for i in range(nombre):
    print(str(i))
    type = input('Type d\'objet: ')
    type = int(type)
    h.write('\nbenin['+str(map_x)+']['+str(map_y)+'].object['+str(i)+'] = '+str(type)+';')
    h.write('\nbenin['+str(map_x)+']['+str(map_y)+'].obj_x['+str(i)+'] = '+str(data['layers'][1]['objects'][i]['x'])+';')
    h.write('\nbenin['+str(map_x)+']['+str(map_y)+'].obj_y['+str(i)+'] = '+str(data['layers'][1]['objects'][i]['y'])+';')
    if type == 2:
        sprite = input('Sprite du PNJ: ')
        sprite = int(input)
        h.write('\nbenin['+str(map_x)+']['+str(map_y)+'].npcsprite = '+str(sprite)+';')