#pragma once
#include <glm\glm.hpp>
#include <GL\glew.h>
#include <string>
#include "ObjectLoader.h"

struct Vertex
{
public:
	Vertex(const glm::vec3& position, const glm::vec2& coordinates)
	{
		this->position = position;
		this->coordinates = coordinates;
		this->normal = normal;
	}

	glm::vec3* GetPosition() { return &position; }
	glm::vec2* GetCoordinates() { return &coordinates; }
	glm::vec3* GetNormal() { return &normal; }

private:
	glm::vec3 position;
	glm::vec2 coordinates;
	glm::vec3 normal;
};

class Meshes
{
public:
	Meshes();
	~Meshes();

	void draw();
	//void initialize(Vertex* vertices, unsigned int numOfVertices, unsigned int* indices, unsigned int numOfIndices);
	void loadModel(const std::string& filename);
	void initializeModel(const IndexedModel& model);

private:



	enum
	{
		POSITION_VERTEXBUFFER,
		TEXCOORD_VB,
		NORMAL_VB,
		INDEX_VB,
		NUM_BUFFERS
	};

	GLuint vertexArrayObject;
	GLuint vertexArrayBuffers[NUM_BUFFERS]; // create our array of buffers
	unsigned int drawCount; //how much of the vertexArrayObject do we want to draw
};

