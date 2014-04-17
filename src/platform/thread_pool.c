/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2015, ruki All rights reserved.
 *
 * @author		ruki
 * @file		thread_pool.c
 * @ingroup 	platform
 *
 */

/* //////////////////////////////////////////////////////////////////////////////////////
 * trace
 */
#define TB_TRACE_MODULE_NAME 				"thread_pool"
#define TB_TRACE_MODULE_DEBUG 				(0)

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "platform.h"
#include "../utils/utils.h"
#include "../memory/memory.h"
#include "../container/container.h"
#include "../algorithm/algorithm.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * instance implementation
 */
static tb_handle_t tb_thread_pool_instance_init()
{
	// the maxn
#ifdef __tb_small__
	tb_size_t maxn = 4;
#else
	tb_size_t maxn = 8;
#endif

	// init it
	return tb_thread_pool_init(maxn, 0);
}

/* //////////////////////////////////////////////////////////////////////////////////////
 * implementation
 */
tb_handle_t tb_thread_pool_init(tb_size_t worker_maxn, tb_size_t stack)
{
	return tb_null;
}
tb_void_t tb_thread_pool_exit(tb_handle_t handle)
{
}
tb_void_t tb_thread_pool_kill(tb_handle_t handle)
{
}
tb_size_t tb_thread_pool_worker_size(tb_handle_t handle)
{
	return 0;
}
tb_size_t tb_thread_pool_task_size(tb_handle_t handle)
{
	return 0;
}
tb_handle_t tb_thread_pool_task_post(tb_handle_t handle, tb_thread_pool_task_done_func_t done, tb_thread_pool_task_exit_func_t exit, tb_pointer_t priv, tb_bool_t urgent)
{
	return tb_null;
}
tb_bool_t tb_thread_pool_task_post_list(tb_handle_t handle, tb_thread_pool_task_t const* list, tb_size_t size, tb_handle_t* tasks)
{
	return tb_false;
}
tb_void_t tb_thread_pool_task_kill(tb_handle_t handle, tb_handle_t task)
{
}
tb_void_t tb_thread_pool_task_kill_list(tb_handle_t handle, tb_handle_t* tasks, tb_size_t size)
{
}
tb_void_t tb_thread_pool_task_kill_all(tb_handle_t handle)
{
}
tb_handle_t tb_thread_pool_instance()
{
	return tb_singleton_instance(TB_SINGLETON_TYPE_THREAD_POOL, tb_thread_pool_instance_init, tb_thread_pool_exit, tb_thread_pool_kill);
}
#ifdef __tb_debug__
tb_void_t tb_thread_pool_worker_dump(tb_handle_t handle)
{
}
tb_void_t tb_thread_pool_task_dump(tb_handle_t handle)
{
}
#endif
