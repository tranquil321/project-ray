project-ray
===========
This will be a game engine written in C++ using the ncurses library. It will use the entity component system.

Components
----------
Components are all derived from a base class `Component` and contain data which is used for some functionality of the game object. For example, the class `PhysicsComponent` will contain position, velocity, et cetera. The components contain no functions other than getters and setters.

Game Objects
------------
A game object can be anything from a player to a currently-rolling boulder. The class `GameObject` is a container which merely contains a handle and the handles which refer to the components associated with it. It cannot be extended, and all game objects are an instance of this class.

Systems
-------
Systems are where the functionality of the game resides. Each system contains an `std::vector` of components. For example, `GraphicsSystem` contains `std:vector<GraphicsComponent>`. The systems also have functions to update the game state by iterating through the components and deciding what to do with them, add components with given parameters, remove components, and modify components on behalf of other systems which request it.

As an example, the Logic System is updating all its components and an entity is in battle mode. It needs to find a nearby target, so the Logic System makes a call to the Position System to find enemies within a certain range, `PositionSystem::Find(radius, raytracing?)`, which returns a list of entity IDs. It then checks which target to attack, depending on properties of both the attacker and candidate targets, and decides to attack another entity. The Logic System makes a call to the Battle System, e.g. `BattleSystem::Attack(targetComponentID, damageAmount, damageType)`, which looks up the component of the defending entity and decides how much of that damage goes through, depending on what defense the defender has etc., whether it hits or not, and so on.

Engine
------
