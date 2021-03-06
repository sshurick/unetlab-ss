// vim: syntax=c tabstop=4 softtabstop=0 noexpandtab laststatus=1 ruler

/**
 * wrappers/includes/functions.h
 *
 * Functions for wrappers.
 *
 * LICENSE:
 *
 * This file is part of UNetLab (Unified Networking Lab).
 *
 * UNetLab is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * UNetLab is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with UNetLab.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @author Andrea Dainese <andrea.dainese@gmail.com>
 * @copyright 2014-2015 Andrea Dainese
 * @license http://www.gnu.org/licenses/gpl.html
 * @link http://www.unetlab.com/
 * @version 20150422
 */

#include <sys/types.h>

// Check if a string is valid (not empty, not null)
int is_string(char *s);

// Check if a string is numeric
int is_numeric(char *s);

// Check if a string is hexadecimal
int is_hex(char *s);

// Check if a file exists
int is_file(char *s);

// Handling Signals
void signal_handler(int signal);

// Print version
void version();
