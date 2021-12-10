import json

with open('map.json') as f:
    data = json.load(f)

def setY(str):
    if str == 'y':
        return True
    else:
        return False

is_y = input('2D? (y/n)')
presen = setY(is_y)

map_x = input('Coordonné X (0-2): ')
map_x = int(map_x)
if presen == True:
    map_y = input('Coordonné y (0-2): ')
    map_y = int(map_y)

name = input('Nom de la map: ')

nombre = input('Nombre d\'objets: ')
nombre = int(nombre)

h = open('map.h', 'a')

for i in range(nombre):
    print(str(i))
    type = data['layers'][1]['objects'][i]['type']
    type = str(type)
    if presen == True:
        sproum = '\n'+name+'['+str(map_x)+']['+str(map_y)
    else:
        sproum = '\n'+name+'['+str(map_x)
    h.write(sproum+'].object['+str(i)+'] = '+str(type)+';')
    h.write(sproum+'].obj_x['+str(i)+'] = '+str(data['layers'][1]['objects'][i]['x'])+';')
    h.write(sproum+'].obj_y['+str(i)+'] = '+str(data['layers'][1]['objects'][i]['y'])+';')
    if type == 2:
        sprite = input('Sprite du PNJ: ')
        sprite = int(input)
        h.write(sproum+'].npcsprite = '+str(sprite)+';')