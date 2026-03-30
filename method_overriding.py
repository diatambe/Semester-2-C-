class vehicle:
    def move(self):
        print("Vehicle is moving")
class car(vehicle):
    def move(self):
        print("Driving on road")
class bicycle(vehicle):
    def move(self):
        print("Paddling on the road")

c=car()
b=bicycle()
c.move()
b.move()