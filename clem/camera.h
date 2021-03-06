// Copyright 2020 SMS
// License(Apache-2.0)
// 场景摄像机

#ifndef CLEM_CAMERA_H_
#define CLEM_CAMERA_H_

#include <vector>
#include "type.h"
#include "renderer.h"

typedef unsigned short ushort;

class Scene;
class Renderer;
class Factor;

class Camera
{
public:
	Camera();
	Camera(Scene* scene);

	void render();

	void   setScene(Scene* scene);
	Scene* getScene() const;

	void setInputPosition(const Point& pos);
	void setOutputPosition(const Point& pos);

	void setSize(Size size);
	Size getSize() const;
	
	void   setDepth(ushort depth);
	ushort getDepth() const;

private:
	Scene* scene;
	Point  inPos, outPos;
	Size   size;
  ushort depth;
};

#endif // CLEM_CAMERA_H_
