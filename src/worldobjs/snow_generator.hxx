//  $Id: snow_generator.hxx,v 1.1 2002/09/16 15:47:35 grumbel Exp $
// 
//  Pingus - A free Lemmings clone
//  Copyright (C) 2000 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
// 
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_PINGUS_PARTICLES_SNOW_GENERATOR_HXX
#define HEADER_PINGUS_PARTICLES_SNOW_GENERATOR_HXX

#include "../worldobj.hxx"

class SnowGenerator : public WorldObj
{
private:

public:
  SnowGenerator ();
  virtual ~SnowGenerator ();

  virtual void update (float delta);
  float get_z_pos () const { return 1000; }
private:
  SnowGenerator (const SnowGenerator&);
  SnowGenerator operator= (const SnowGenerator&);
};

#endif

/* EOF */
