//Copyright(C) 2025 Lost Empire Entertainment
//This program comes with ABSOLUTELY NO WARRANTY.
//This is free software, and you are welcome to redistribute it under certain conditions.
//Read LICENSE.md for more information.

#pragma once

#include <cstdint>
#include <cstddef>

#include "core/platform.hpp"

using std::uint32_t;
using std::int32_t;
using std::ptrdiff_t;

#ifdef _WIN32
#define K_APIENTRY __stdcall
#elif __linux__
#define K_APIENTRY
#endif

using GLbitfield = uint32_t;
using GLboolean = uint8_t;
using GLbyte = int8_t;
using GLenum = uint32_t;
using GLint = int32_t;
using GLintptr = ptrdiff_t;
using GLshort = int16_t;
using GLsizeiptr = ptrdiff_t;
using GLsizei = int32_t;
using GLuint = uint32_t;
using GLubyte = uint8_t;
using GLushort = uint16_t;

//OpenGL system queries

inline constexpr GLenum GL_VENDOR   = 0x1F00; //String identifying the vendor
inline constexpr GLenum GL_RENDERER = 0x1F01; //String identifying the renderer
inline constexpr GLenum GL_VERSION  = 0x1F02; //String describing the OpenGL version

//For glGetStringi (OpenGL 3.0+)

inline constexpr GLenum GL_NUM_EXTENSIONS           = 0x821D; //Number of supported extensions
inline constexpr GLenum GL_SHADING_LANGUAGE_VERSION = 0x8B8C; //GLSL version string

//OpenGL error codes

inline constexpr GLenum GL_INVALID_ENUM      = 0x0500; //An unacceptable value is specified for an enumerated argument
inline constexpr GLenum GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506; //Framebuffer object is not complete
inline constexpr GLenum GL_INVALID_OPERATION = 0x0502; //The specified operation is not allowed in the current state
inline constexpr GLenum GL_INVALID_VALUE     = 0x0501; //A numeric argument is out of range
inline constexpr GLenum GL_NO_ERROR          = 0x0000; //No error has been recorded
inline constexpr GLenum GL_OUT_OF_MEMORY     = 0x0505; //There is not enough memory left to execute the command
inline constexpr GLenum GL_STACK_OVERFLOW    = 0x0503; //Function would cause a stack overflow
inline constexpr GLenum GL_STACK_UNDERFLOW   = 0x0504; //Function would cause a stack underflow

//Shader types

inline constexpr GLenum GL_FRAGMENT_SHADER = 0x8B30; //Fragment shader type
inline constexpr GLenum GL_GEOMETRY_SHADER = 0x8DD9; //Geometry shader type
inline constexpr GLenum GL_VERTEX_SHADER   = 0x8B31; //Vertex shader type

//Shader parameter enums

inline constexpr GLenum GL_ACTIVE_ATTRIBUTES  = 0x8B89; //Number of active attributes
inline constexpr GLenum GL_ACTIVE_UNIFORMS    = 0x8B86; //Number of active uniforms
inline constexpr GLenum GL_COMPILE_STATUS     = 0x8B81; //Shader compilation status
inline constexpr GLenum GL_INFO_LOG_LENGTH    = 0x8B84; //Length of the shader info log
inline constexpr GLenum GL_LINK_STATUS        = 0x8B82; //Shader program link status
inline constexpr GLenum GL_VALIDATE_STATUS    = 0x8B83; //Shader program validation status

//Shader interface queries

inline constexpr GLenum GL_ACTIVE_RESOURCES   = 0x929F; //Active resource query
inline constexpr GLenum GL_CURRENT_PROGRAM    = 0x8B8D; //Currently active program
inline constexpr GLenum GL_LOCATION           = 0x930E; //Shader variable location
inline constexpr GLenum GL_NAME_LENGTH        = 0x92F9; //Length of active resource name
inline constexpr GLenum GL_PROGRAM_INPUT      = 0x92E3; //Program input interface
inline constexpr GLenum GL_PROGRAM_OUTPUT     = 0x92E4; //Program output interface
inline constexpr GLenum GL_TYPE               = 0x92FA; //Type of resource

//Uniform usage

inline constexpr GLboolean GL_TRUE  = 1; //Boolean true (as GLboolean)
inline constexpr GLboolean GL_FALSE = 0; //Boolean false (as GLboolean)

//Texture usage

inline constexpr GLenum GL_CLAMP_TO_EDGE      = 0x812F; //Texture clamp mode
inline constexpr GLenum GL_TEXTURE_2D         = 0x0DE1; //2D texture target
inline constexpr GLenum GL_TEXTURE_BASE_LEVEL = 0x813C; //Lowest mipmap level
inline constexpr GLenum GL_TEXTURE_MAX_LEVEL  = 0x813D; //Highest mipmap level
inline constexpr GLenum GL_RGB                = 0x1907; //RGB format
inline constexpr GLenum GL_RGBA               = 0x1908; //RGBA format
inline constexpr GLenum GL_NEAREST            = 0x2600; //Nearest-neighbor filtering
inline constexpr GLenum GL_LINEAR             = 0x2601; //Linear filtering
inline constexpr GLenum GL_TEXTURE_MAG_FILTER = 0x2800; //Texture magnification filter
inline constexpr GLenum GL_TEXTURE_MIN_FILTER = 0x2801; //Texture minification filter
inline constexpr GLenum GL_TEXTURE_WRAP_S     = 0x2802; //Horizontal texture wrapping mode
inline constexpr GLenum GL_TEXTURE_WRAP_T     = 0x2803; //Vertical texture wrapping mode
inline constexpr GLenum GL_REPEAT             = 0x2901; //Repeat wrapping mode
inline constexpr GLenum GL_TEXTURE0           = 0x84C0; //First multitexture unit
inline constexpr GLenum GL_TEXTURE1           = 0x84C1; //Second multitexture unit
inline constexpr GLenum GL_TEXTURE2           = 0x84C2; //Third multitexture unit

//Buffer targets

inline constexpr GLenum GL_ARRAY_BUFFER           = 0x8892; //Vertex attribute buffer
inline constexpr GLenum GL_ARRAY_BUFFER_BINDING   = 0x8894; //Currently bound vertex buffer

//Buffer usage

inline constexpr GLenum GL_STATIC_DRAW = 0x88E4; //Data modified once, used many times

//Vertex attribute types

inline constexpr GLenum GL_BYTE           = 0x1400; //signed 8-bit integer vertex attribute type
inline constexpr GLenum GL_UNSIGNED_BYTE  = 0x1401; //unsigned 8-bit integer vertex attribute type
inline constexpr GLenum GL_SHORT          = 0x1402; //signed 16-bit integer vertex attribute type
inline constexpr GLenum GL_UNSIGNED_SHORT = 0x1403; //unsigned 16-bit integer vertex attribute type
inline constexpr GLenum GL_INT            = 0x1404; //signed 32-bit integer vertex attribute type
inline constexpr GLenum GL_UNSIGNED_INT   = 0x1405; //unsigned 32-bit integer vertex attribute type
inline constexpr GLenum GL_FLOAT          = 0x1406; //float vertex attribute type
inline constexpr GLenum GL_HALF_FLOAT     = 0x140B; //16-bit float (half float), used in some texture formats

//Vertex attribute state queries

inline constexpr GLenum GL_VERTEX_ARRAY_BINDING        = 0x85B5; //Currently bound vertex array object
inline constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622; //Whether a vertex attribute array is enabled
inline constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE    = 0x8623; //Number of components per vertex attribute
inline constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE  = 0x8624; //Byte offset between consecutive attributes
inline constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE    = 0x8625; //Data type of attribute components
inline constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645; //Memory location of the vertex attribute data

//Framebuffer object (FBO) defines

inline constexpr GLenum GL_FRAMEBUFFER                = 0x8D40; //Framebuffer object target
inline constexpr GLenum GL_RENDERBUFFER               = 0x8D41; //Renderbuffer object target
inline constexpr GLenum GL_COLOR_ATTACHMENT0          = 0x8CE0; //First color attachment point for framebuffer
inline constexpr GLenum GL_DEPTH24_STENCIL8           = 0x88F0; //Combined depth+stencil internal format
inline constexpr GLenum GL_DEPTH_STENCIL_ATTACHMENT   = 0x821A; //Attachment point for combined depth/stencil
inline constexpr GLenum GL_FRAMEBUFFER_COMPLETE       = 0x8CD5; //Framebuffer is complete and ready for rendering

//Drawing and clearing commands

inline constexpr GLbitfield GL_COLOR_BUFFER_BIT   = 0x00004000; //Bitmask for clearing the color buffer
inline constexpr GLbitfield GL_DEPTH_BUFFER_BIT   = 0x00000100; //Bitmask for clearing the depth buffer
inline constexpr GLbitfield GL_STENCIL_BUFFER_BIT = 0x00000400; //Bitmask for clearing the stencil buffer
inline constexpr GLenum     GL_LINES              = 0x0001; //Primitive type: lines
inline constexpr GLenum     GL_LINE_STRIP         = 0x0003; //Primitive type: connected line strip
inline constexpr GLenum     GL_TRIANGLES          = 0x0004; //Primitive type: triangles
inline constexpr GLenum     GL_TRIANGLE_STRIP     = 0x0005; //Primitive type: connected triangle strip
inline constexpr GLenum     GL_TRIANGLE_FAN       = 0x0006; //Primitive type: connected triangle fan

//
// GEOMETRY
//

//Binds a named buffer to a specified buffer binding point
KALAWINDOW_API extern void (K_APIENTRY* glBindBuffer)(
	GLenum target,
	GLuint buffer);

//Binds a vertex array object
KALAWINDOW_API extern void (K_APIENTRY* glBindVertexArray)(
	GLuint array);

//Creates and initializes a buffer object's data store
KALAWINDOW_API extern void (K_APIENTRY* glBufferData)(
	GLenum target,
	GLsizeiptr size,
	const void* data,
	GLenum usage);

//Deletes one or more named buffer objects
KALAWINDOW_API extern void (K_APIENTRY* glDeleteBuffers)(
	GLsizei n,
	const GLuint* buffers);

//Deletes one or more named vertex array objects
KALAWINDOW_API extern void (K_APIENTRY* glDeleteVertexArrays)(
	GLsizei n,
	const GLuint* arrays);

//Draws non-indexed primitives from array data
KALAWINDOW_API extern void (K_APIENTRY* glDrawArrays)(
	GLenum mode,
	GLint first,
	GLsizei count);

//Draws indexed primitives using array data and element indices
KALAWINDOW_API extern void (K_APIENTRY* glDrawElements)(
	GLenum mode,
	GLsizei count,
	GLenum type,
	const void* indices);

//Enables a generic vertex attribute array
KALAWINDOW_API extern void (K_APIENTRY* glEnableVertexAttribArray)(
	GLuint index);

//Generates buffer object names
KALAWINDOW_API extern void (K_APIENTRY* glGenBuffers)(
	GLsizei n,
	GLuint* buffers);

//Generates vertex array object names
KALAWINDOW_API extern void (K_APIENTRY* glGenVertexArrays)(
	GLsizei n,
	GLuint* arrays);

//Retrieves parameter values for a vertex attribute array
KALAWINDOW_API extern void (K_APIENTRY* glGetVertexAttribiv)(
	GLuint index,
	GLenum pname,
	GLint* params);

//Retrieves a pointer to a vertex attribute array parameter
KALAWINDOW_API extern void (K_APIENTRY* glGetVertexAttribPointerv)(
	GLuint index,
	GLenum pname,
	void** pointer);

//Defines an array of generic vertex attribute data
KALAWINDOW_API extern void (K_APIENTRY* glVertexAttribPointer)(
	GLuint index,
	GLint size,
	GLenum type,
	GLboolean normalized,
	GLsizei stride,
	const void* pointer);

//
// SHADERS
//

//Attaches a shader object to a program
KALAWINDOW_API extern void (K_APIENTRY* glAttachShader)(
	GLuint program,
	GLuint shader);

//Compiles a shader object
KALAWINDOW_API extern void (K_APIENTRY* glCompileShader)(
	GLuint shader);

//Creates a new shader program object
KALAWINDOW_API extern GLuint(K_APIENTRY* glCreateProgram)(
	void);

//Creates a shader object of the specified type
KALAWINDOW_API extern GLuint(K_APIENTRY* glCreateShader)(
	GLenum type);

//Deletes a shader object
KALAWINDOW_API extern void (K_APIENTRY* glDeleteShader)(
	GLuint shader);

//Deletes a program object
KALAWINDOW_API extern void (K_APIENTRY* glDeleteProgram)(
	GLuint program);

//Detaches a shader object from a program
KALAWINDOW_API extern void (K_APIENTRY* glDetachShader)(
	GLuint program,
	GLuint shader);

//Retrieves information about an active attribute variable
KALAWINDOW_API extern void (K_APIENTRY* glGetActiveAttrib)(
	GLuint program,
	GLuint index,
	GLsizei bufSize,
	GLsizei* length,
	GLint* size,
	GLenum* type,
	char* name);

//Returns the attribute location within a shader program
KALAWINDOW_API extern GLint(K_APIENTRY* glGetAttribLocation)(
	GLuint program,
	const char* name);

//Retrieves a parameter from a program object
KALAWINDOW_API extern void (K_APIENTRY* glGetProgramiv)(
	GLuint program,
	GLenum pname,
	GLint* params);

//Returns the information log for a program object
KALAWINDOW_API extern void (K_APIENTRY* glGetProgramInfoLog)(
	GLuint program,
	GLsizei bufSize,
	GLsizei* length,
	char* infoLog);

//Retrieves a parameter from a shader object
KALAWINDOW_API extern void (K_APIENTRY* glGetShaderiv)(
	GLuint shader,
	GLenum pname,
	GLint* params);

//Returns the information log for a shader object
KALAWINDOW_API extern void (K_APIENTRY* glGetShaderInfoLog)(
	GLuint shader,
	GLsizei bufSize,
	GLsizei* length,
	char* infoLog);

//Links a program object
KALAWINDOW_API extern void (K_APIENTRY* glLinkProgram)(
	GLuint program);

//Sets the source code for a shader
KALAWINDOW_API extern void (K_APIENTRY* glShaderSource)(
	GLuint shader,
	GLsizei count,
	const char* const* string,
	const GLint* length);

//Activates a shader program for rendering
KALAWINDOW_API extern void (K_APIENTRY* glUseProgram)(
	GLuint program);

//Validates a program object to see if it's executable
KALAWINDOW_API extern void (K_APIENTRY* glValidateProgram)(
	GLuint program);

//Returns whether a given program name is a valid program object
KALAWINDOW_API extern GLboolean(K_APIENTRY* glIsProgram)(
	GLuint program);

//
// UNIFORMS
//

//Retrieves the location of a uniform variable within a shader program
KALAWINDOW_API extern GLint(K_APIENTRY* glGetUniformLocation)(
	GLuint program,
	const char* name);

//Sets a single float uniform value
KALAWINDOW_API extern void (K_APIENTRY* glUniform1f)(
	GLint location,
	float v0);

//Sets a single integer uniform value
KALAWINDOW_API extern void (K_APIENTRY* glUniform1i)(
	GLint location,
	GLint v0);

//Sets a vec2 uniform (2 float components)
KALAWINDOW_API extern void (K_APIENTRY* glUniform2f)(
	GLint location,
	float v0,
	float v1);

//Sets a vec2 uniform from an array of values
KALAWINDOW_API extern void (K_APIENTRY* glUniform2fv)(
	GLint location,
	GLsizei count,
	const float* value);

//Sets a vec3 uniform (3 float components)
KALAWINDOW_API extern void (K_APIENTRY* glUniform3f)(
	GLint location,
	float v0,
	float v1,
	float v2);

//Sets a vec3 uniform from an array of values
KALAWINDOW_API extern void (K_APIENTRY* glUniform3fv)(
	GLint location,
	GLsizei count,
	const float* value);

//Sets a vec4 uniform (4 float components)
KALAWINDOW_API extern void (K_APIENTRY* glUniform4f)(
	GLint location,
	float v0,
	float v1,
	float v2,
	float v3);

//Sets a vec4 uniform from an array of values
KALAWINDOW_API extern void (K_APIENTRY* glUniform4fv)(
	GLint location,
	GLsizei count,
	const float* value);

//Sets a 2�2 matrix uniform from an array of floats
KALAWINDOW_API extern void (K_APIENTRY* glUniformMatrix2fv)(
	GLint location,
	GLsizei count,
	GLboolean transpose,
	const float* value);

//Sets a 3�3 matrix uniform from an array of floats
KALAWINDOW_API extern void (K_APIENTRY* glUniformMatrix3fv)(
	GLint location,
	GLsizei count,
	GLboolean transpose,
	const float* value);

//Sets a 4�4 matrix uniform from an array of floats
KALAWINDOW_API extern void (K_APIENTRY* glUniformMatrix4fv)(
	GLint location,
	GLsizei count,
	GLboolean transpose,
	const float* value);

//
// TEXTURES
//

//Binds a named texture to a texturing target
KALAWINDOW_API extern void (K_APIENTRY* glBindTexture)(
	GLenum target,
	GLuint texture);

//Activates the specified texture unit
KALAWINDOW_API extern void (K_APIENTRY* glActiveTexture)(
	GLenum texture);

//Deletes one or more named textures
KALAWINDOW_API extern void (K_APIENTRY* glDeleteTextures)(
	GLsizei n,
	const GLuint* textures);

//Generates mipmaps for the currently bound texture
KALAWINDOW_API extern void (K_APIENTRY* glGenerateMipmap)(
	GLenum target);

//Generates texture object names
KALAWINDOW_API extern void (K_APIENTRY* glGenTextures)(
	GLsizei n,
	GLuint* textures);

//Specifies a two-dimensional texture image
KALAWINDOW_API extern void (K_APIENTRY* glTexImage2D)(
	GLenum target,
	GLint level,
	GLint internalFormat,
	GLsizei width,
	GLsizei height,
	GLint border,
	GLenum format,
	GLenum type,
	const void* data);

//Sets texture parameters for the currently bound texture
KALAWINDOW_API extern void (K_APIENTRY* glTexParameteri)(
	GLenum target,
	GLenum pname,
	GLint param);

//Specifies a subregion of an existing 2D texture image
KALAWINDOW_API extern void (K_APIENTRY* glTexSubImage2D)(
	GLenum target,
	GLint level,
	GLint xoffset,
	GLint yoffset,
	GLsizei width,
	GLsizei height,
	GLenum format,
	GLenum type,
	const void* pixels);

//
// FRAMEBUFFERS AND RENDERBUFFERS
//

//Binds a renderbuffer to the renderbuffer target
KALAWINDOW_API extern void (K_APIENTRY* glBindRenderbuffer)(
	GLenum target,
	GLuint renderbuffer);

//Binds a framebuffer to a framebuffer target
KALAWINDOW_API extern void (K_APIENTRY* glBindFramebuffer)(
	GLenum target,
	GLuint framebuffer);

//Checks the completeness status of a framebuffer
KALAWINDOW_API extern GLenum(K_APIENTRY* glCheckFramebufferStatus)(
	GLenum target);

//Attaches a renderbuffer to a framebuffer attachment point
KALAWINDOW_API extern void (K_APIENTRY* glFramebufferRenderbuffer)(
	GLenum target,
	GLenum attachment,
	GLenum renderbuffertarget,
	GLuint renderbuffer);

//Attaches a 2D texture image to a framebuffer attachment point
KALAWINDOW_API extern void (K_APIENTRY* glFramebufferTexture2D)(
	GLenum target,
	GLenum attachment,
	GLenum textarget,
	GLuint texture,
	GLint level);

//Generates renderbuffer object names
KALAWINDOW_API extern void (K_APIENTRY* glGenRenderbuffers)(
	GLsizei n,
	GLuint* renderbuffers);

//Generates framebuffer object names
KALAWINDOW_API extern void (K_APIENTRY* glGenFramebuffers)(
	GLsizei n,
	GLuint* framebuffers);

//Establishes data storage format and dimensions for a renderbuffer
KALAWINDOW_API extern void (K_APIENTRY* glRenderbufferStorage)(
	GLenum target,
	GLenum internalformat,
	GLsizei width,
	GLsizei height);

//
// FRAME AND RENDER STATE
//

//Clears buffers to preset values
KALAWINDOW_API extern void (K_APIENTRY* glClear)(
	GLbitfield mask);

//Specifies the clear color for color buffers
KALAWINDOW_API extern void (K_APIENTRY* glClearColor)(
	float red,
	float green,
	float blue,
	float alpha);

//Disables a specific OpenGL capability
KALAWINDOW_API extern void (K_APIENTRY* glDisable)(
	GLenum cap);

//Returns the last error flag raised
KALAWINDOW_API extern GLenum(K_APIENTRY* glGetError)(
	void);

//Retrieves integer-valued parameters
KALAWINDOW_API extern void (K_APIENTRY* glGetIntegerv)(
	GLenum pname,
	GLint* data);

//Returns a string describing the current GL connection
KALAWINDOW_API extern const GLubyte* (K_APIENTRY* glGetString)(
	GLenum name);

//Sets the viewport transformation dimensions
KALAWINDOW_API extern void (K_APIENTRY* glViewport)(
	GLint x,
	GLint y,
	GLsizei width,
	GLsizei height);

namespace KalaWindow::Graphics::OpenGL
{
	class KALAWINDOW_API OpenGLCore
	{
	public:
		//Initializes all OpenGL 3.3 functions
		static void InitializeAllFunctions();

		//Initializes a single OpenGL 3.3 function
		static void InitializeFunction(const char* name);

		//Returns true if the function is available
		static bool IsFunctionAvailable(const char* name);

		//Returns the address of an OpenGL function. Requires a current context.
		static void* GetGLProcAddress(const char* name);
	};
}