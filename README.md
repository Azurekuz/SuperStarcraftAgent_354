# PEAS

## Performance
Performance for the Starcraft agent can be measured by starting from a simple standard: how often does it win? However, for the sake of being detail-oriented, and since winning is not a guarantee with our newly created bot, there are a few in-game factors that can serve to measure an agent's performance. The first is economy management or aptly put, how many resources (in our case, Minerals and Vespene Gas) can the agent obtain. The next important factor in that attainment process is the efficiency, seeing as there is no point in simply getting more resources if the enemy is able to do so faster, and send an army to destroy our base. With that said, the next usable measures are how successfully and how quickly is the agent able to construct structures as well as train up an army. Normally, with a human player, efficiency may be measured with how many actions per minute they are able to make along with what strategy they are going for. Considering the agent and the API we're working with does its decision making every frame, physical efficiency (how quickly one can make inputs to the game UI and controls) isn't the concern, but rather tactical. The main focus of our agent, along with our developmental efforts, is to have it make sound decisions every frame in order to place itself in a better position later in-game compared to its opponent. Of course, there is also an additional complexity where the agent would ideally factor in unit match ups (some units of a certain type will do better against some, worse against others). In the case of UAlbertaBot, they used an open source combat simulation API called SparCraft which dealt with this issue by simulating combat to strategize. Meanwhile, on our hand, our present intention is to make a more model-based agent that is capable of constructing a functional economy, and building up a Terran army of Siege Tanks and Goliaths. This would be a preset strategy rather than one our agent would independently propose.

## Environment
The environment our agent acts in and upon is a game map in Starcraft: Brood War, where it is usually supplied with a base and a handful of worker units which it will immediately set to work upon the start of the game. Starcraft maps may vary in terms of their navigable terrain, as well as the potential number of opponents. Not only does the terrain serve for the agent to consider the movement of its armies, but also the building of needed structures. In a more ideal and advanced case, the agent would also expand its base to other areas with resource deposits, therefore providing itself with a larger flow of resources and therefore furthers means of army production.
Technically, the Starcraft game environment is deterministic assuming both sides, in all games on the same map, indentically set their structures up, build their units, and make the same exact combat match-ups (assuming the combat mechanics don't include an element of randomness). However, with the real-time, continuous, and seemingly dynamic nature of the game along with it being a partially observable emvironment, it definitely may seem stocastic. The main point, is that the game is deterministic insofar as an agent's tactical decisions will be the main factor which will affect its position in the mid to end-game, but it is stochastic due to the incomplete information both sides are working with. The agent does not need to maintain physical skill (physically making many moves within a specific time frame) through actions per minute since it makes its decisions every frame. One might say its as fast as it can be, therefore APM is irrelevant. The main deciding factor is its "thought" process and whether it can make intelligently tactical choices in its provided environment.

## Actuators
By making the agent, together with it using BWAPI (Brood War API), as users and developers we do not need to be concerned about manually interacting with the UI or mouse controls. The API directly interacts with the gamestate, its objects, and attributes in order to allow us, the developers, to make agent play the game tactically and validly (without cheating). The agents actuators are its ability to cycle through units and buildings, and to issue their owned "game pieces" commands which range from moving them, interacting with other objects, commencing a research project, build a new structure, or engage in combat.

## Sensors
Starcraft, by default, provides the players with incomplete information which done using a fog of war. The agent may only see within a specific radius around each allied structure and units, meaning that this is the only means of seeing enemy forces. This means that for our agent, it is working with an unknown or partially observable environment. The agent will know or be provided with information such as valid places to build or move units; however, when it comes to making tactical combat decisions, the onus is on the agent to properly scout and reveal the environment to ascertain its opponents' moves/actions so it can properly respond. Alternatively, to word it within the context of our class, the agent must ideally be capable of revealing information initially unknown to it, in order to have a more effective percept-action model.

# Agent Interface Description

# Simulation Interface Description

# Task Distribution

## Week of November 4th
- Orion: Have the agent **build structures**
- Desmond: Have the agent **create Barracks' Units**
- Cobi: Get the agent to **create SCV Units**
- Eugene: Creating GitHub Repo and Wiki, **Getting SCVs Units to gather resources**

# Updates

## Update on November 10th
We actually got the ExampleAIModule, provided by BWAPI, buildable and working
at least on Eugene's PC (maybe?). Currently trying to get everyone's versions working
so we can begin implementing and testing the API out.
Turns out he was using an older version of BWAPI which is why everything worked in VS2013 for him.
Now it's a matter of getting everyone situated with BWAPI 4.4.0 and VS2017.

## Update on November 8th
We have successfully gotten UAlbertaBot to work in SC1.
Our next order of business is to strip it down to its very basics
and get that working. The base agent will serve as a foundation for
us to work off of.


