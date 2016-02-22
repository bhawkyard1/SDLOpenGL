#ifndef SDL_OPENGL_H
#define SDL_OPENGL_H

#include <SDL.h>
#include <string>

class SDLOpenGL
{
public:
  SDLOpenGL( const std::string &_name,
             int _x,
             int _y,
             int _width,
             int _height );
  void makeCurrent() const { SDL_GL_MakeCurrent( m_window, m_glContext ); }
  void swapWindow() const { SDL_GL_SwapWindow( m_window ); }
private:
  int m_width;
  int m_height;
  int m_x;
  int m_y;
  std::string m_name;
  SDL_GLContext m_glContext;
  SDL_Window * m_window;

  void init();
  void createGLContext();
  void errorExit( const std::string &_msg ) const;
};

#endif
