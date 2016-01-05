{
	This file is part of the Mufasa Macro Library (MML)
	Copyright (c) 2009 by Raymond van Venetië and Merlijn Wajer

    MML is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MML is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MML.  If not, see <http://www.gnu.org/licenses/>.

	See the file COPYING, included in this distribution,
	for details about the copyright.

    Mouse.inc for the Mufasa Macro Library
}

procedure ps_MoveMouse(x, y: integer); extdecl;
begin
  CurrThread.Client.IOManager.MoveMouse(X, Y);
end;

procedure ps_ScrollMouse(x,y : integer; Clicks : integer); extdecl;
begin
  CurrThread.Client.IOManager.ScrollMouse(x,y,Clicks);
end;

procedure ps_GetMousePos(var x, y: integer); extdecl;
begin
   CurrThread.Client.IOManager.GetMousePos(X, Y);
end;

procedure ps_HoldMouse(x, y: integer; clickType: TClickType); extdecl;
begin
   CurrThread.Client.IOManager.HoldMouse(x, y, clickType);
end;

procedure ps_ReleaseMouse(x, y: integer; clickType: TClickType); extdecl;
begin
   CurrThread.Client.IOManager.ReleaseMouse(x, y, clickType);
end;

procedure ps_ClickMouse(x, y: integer; clickType: TClickType); extdecl;
begin
   CurrThread.Client.IOManager.ClickMouse(x, y, clickType);
end;

function  ps_IsMouseButtonDown( button : TClickType) : boolean; extdecl;
begin
  result := CurrThread.Client.IOManager.IsMouseButtonDown(button);
end;
