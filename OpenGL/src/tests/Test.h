#pragma once

namespace test {
	class Test
	{
	public:

		virtual void OnUpdate(float deltaTime) {}
		virtual void OnRender() {}
		virtual void OnImGuiRender(){}

	private:

	};

}