# include "FlagShip.h"

static FSchar *fgs_file_name = "blobcopy";

static FSvoid init_ref_data();
extern int    fgsDonotenter;

extern FSvar *_bb__get_assign_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_backspace_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_baddate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_baddate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_block_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_block_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_buffer_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_buffer_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_changed_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_classname_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_col_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_col_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_col_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_colordisp_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_decpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_delend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delete_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delwordlef_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delwordleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delwordrig_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_delwordright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_destroy_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_destroyona_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_destroyona_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_display_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_editfast_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_emptydate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_exec_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_font_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_font_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_getcurdata_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_guiobj2var_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_guivar2obj_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_handler_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_handler_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_hasfocus_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_height_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_height_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_height_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_hittest_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_insert_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_ismultiunicode_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_killfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_message_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_message_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_move_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_multibyte_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_multibyte_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_original_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_overstrike_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_picture_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_picture_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_pos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_rejected_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_reset_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_row_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_row_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_row_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_setcursor_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_setfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_show_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_todecpos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_tooltip_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_tooltip_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_type_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_typeout_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_undo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_untransfor_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_untransform_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_updatebuff_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_updatebuffer_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_varget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_varput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_width_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__get_width_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__get_width_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_wordleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__get_wordright_me FGS_ANSI((FSint, FSvar *[]));
# define _getAssignMethod 0
# define _getAxitMethod 1
# define _getBackspaceMethod 2
# define _getBaddateMethod 3
# define _getBaddateAccess 4
# define _getBlockAccess 5
# define _getBlockAssign 6
# define _getBufferAccess 7
# define _getBufferAssign 8
# define _getChangedAccess 9
# define _getClassnameMethod 10
# define _getColAccess 11
# define _getColAssign 12
# define _getColMethod 13
# define _getColordispMethod 14
# define _getDecposAccess 15
# define _getDelendMethod 16
# define _getDeleteMethod 17
# define _getDelleftMethod 18
# define _getDelrightMethod 19
# define _getDelwordlefMethod 20
# define _getDelwordleftMethod 21
# define _getDelwordrigMethod 22
# define _getDelwordrightMethod 23
# define _getDestroyMethod 24
# define _getDestroyonaAccess 25
# define _getDestroyonaAssign 26
# define _getDisplayMethod 27
# define _getEditfastMethod 28
# define _getEmptydateAccess 29
# define _getEndMethod 30
# define _getExecMethod 31
# define _getFontAccess 32
# define _getFontAssign 33
# define _getGetcurdataMethod 34
# define _getGuiobj2varMethod 35
# define _getGuivar2objMethod 36
# define _getHandlerAccess 37
# define _getHandlerAssign 38
# define _getHasfocusAccess 39
# define _getHeightAccess 40
# define _getHeightAssign 41
# define _getHeightMethod 42
# define _getHittestMethod 43
# define _getHomeMethod 44
# define _getInitMethod 45
# define _getInsertMethod 46
# define _getIsmultiunicodeMethod 47
# define _getKillfocusMethod 48
# define _getLeftMethod 49
# define _getMessageAccess 50
# define _getMessageAssign 51
# define _getMoveMethod 52
# define _getMultibyteAccess 53
# define _getMultibyteAssign 54
# define _getOriginalAccess 55
# define _getOverstrikeMethod 56
# define _getPictureAccess 57
# define _getPictureAssign 58
# define _getPosAccess 59
# define _getRejectedAccess 60
# define _getResetMethod 61
# define _getRightMethod 62
# define _getRowAccess 63
# define _getRowAssign 64
# define _getRowMethod 65
# define _getSetcursorMethod 66
# define _getSetfocusMethod 67
# define _getShowMethod 68
# define _getTodecposMethod 69
# define _getTooltipAccess 70
# define _getTooltipAssign 71
# define _getTypeAccess 72
# define _getTypeoutAccess 73
# define _getUndoMethod 74
# define _getUntransforMethod 75
# define _getUntransformMethod 76
# define _getUpdatebuffMethod 77
# define _getUpdatebufferMethod 78
# define _getVargetMethod 79
# define _getVarputMethod 80
# define _getWidthAccess 81
# define _getWidthAssign 82
# define _getWidthMethod 83
# define _getWordleftMethod 84
# define _getWordrightMethod 85
# define _get_a_flagProtect 2
# define _get_block_getProtect 3
# define _get_buff_begProtect 4
# define _get_buff_lngProtect 5
# define _get_colorselProtect 6
# define _get_e_flagProtect 7
# define _get_internProtect 8
# define _get_orig_nameProtect 9
# define _get_p_flagProtect 10
# define _get_picfunctProtect 11
# define _get_pict_lngProtect 12
# define _get_pictemplProtect 13
# define _get_s_flagProtect 14
# define _get_tooltipProtect 15
# define _get_var_evalProtect 16
# define _get_var_ptrProtect 17
# define _get_var_stypeProtect 18
# define _get_x_flagProtect 19
# define _getAcolorProtect 20
# define _getAcurschangProtect 21
# define _getAguicursorInstance 22
# define _getBaddateProtect 23
# define _getBaddateInstance 24
# define _getBblockProtect 25
# define _getBhandlerProtect 26
# define _getBlockInstance 27
# define _getBufferInstance 28
# define _getCapcolInstance 29
# define _getCappictInstance 30
# define _getCaprowInstance 31
# define _getCaptionInstance 32
# define _getCargoInstance 33
# define _getCbmessageProtect 34
# define _getCbufferProtect 35
# define _getChangedInstance 36
# define _getClearInstance 37
# define _getColInstance 38
# define _getColorspecInstance 39
# define _getCtypeProtect 40
# define _getCvaltypeProtect 41
# define _getDecposProtect 42
# define _getDecposInstance 43
# define _getDestroyonaInstance 44
# define _getEmptydateProtect 45
# define _getEmptydateInstance 46
# define _getEnd2charInstance 47
# define _getErrvalblocInstance 48
# define _getExitstateInstance 49
# define _getFontInstance 50
# define _getGetenabledInstance 51
# define _getGetskipInstance 52
# define _getGuialignInstance 53
# define _getGuicappictInstance 54
# define _getGuicaptionInstance 55
# define _getGuicolInstance 56
# define _getGuicolorInstance 57
# define _getGuifastInstance 58
# define _getHandlerInstance 59
# define _getHasfocusInstance 60
# define _getHeightInstance 61
# define _getHome2charInstance 62
# define _getIposProtect 63
# define _getLchangedProtect 64
# define _getLdestroyaxProtect 65
# define _getLhasfocusProtect 66
# define _getLmultibyteProtect 67
# define _getMessageInstance 68
# define _getMinusInstance 69
# define _getMultibyteInstance 70
# define _getNameInstance 71
# define _getNcolProtect 72
# define _getNrowProtect 73
# define _getOfontProtect 74
# define _getOnclickactInstance 75
# define _getOnclickkeyInstance 76
# define _getOriginalInstance 77
# define _getPictureProtect 78
# define _getPictureInstance 79
# define _getPosInstance 80
# define _getPostblockInstance 81
# define _getPreblockInstance 82
# define _getReaderInstance 83
# define _getRejectedProtect 84
# define _getRejectedInstance 85
# define _getRowInstance 86
# define _getSubscriptInstance 87
# define _getTooltipInstance 88
# define _getTypeInstance 89
# define _getTypeoutProtect 90
# define _getTypeoutInstance 91
# define _getUserProtect 92
# define _getVoriginalProtect 93
# define _getWidthInstance 94
extern FSvar *_bb__gget_assign_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_backspace_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_buffer_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gget_buffer_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gget_col_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_copy_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_cut_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delete_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delwordlef_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delwordleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delwordrig_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_delwordright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_destroy_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_display_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_editfast_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_font_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gget_font_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gget_getcurdata_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_height_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_hittest_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_insert_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_ismultiunicode_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_killfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_move_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_overstrike_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_paste_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_pos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gget_rejected_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gget_reset_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_row_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_setcursor_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_setfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_todecpos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_tooltip_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gget_tooltip_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gget_undo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_untransfor_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_untransform_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_updatebuff_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_updatebuffer_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_varget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_varput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gget_width_me FGS_ANSI((FSint, FSvar *[]));
# define _ggetAssignL0Method 86
# define _ggetAssignMethod 0
# define _ggetAxitL0Method 87
# define _ggetAxitMethod 1
# define _ggetBackspaceL0Method 88
# define _ggetBackspaceMethod 2
# define _ggetBaddateMethod 3
# define _ggetBaddateAccess 4
# define _ggetBlockAccess 5
# define _ggetBlockAssign 6
# define _ggetBufferL0Access 89
# define _ggetBufferL0Assign 90
# define _ggetBufferAccess 7
# define _ggetBufferAssign 8
# define _ggetChangedAccess 9
# define _ggetClassnameMethod 10
# define _ggetColAccess 11
# define _ggetColAssign 12
# define _ggetColL0Method 91
# define _ggetColMethod 13
# define _ggetColordispMethod 14
# define _ggetCopyMethod 92
# define _ggetCutMethod 93
# define _ggetDecposAccess 15
# define _ggetDelendL0Method 94
# define _ggetDelendMethod 16
# define _ggetDeleteL0Method 95
# define _ggetDeleteMethod 17
# define _ggetDelleftL0Method 96
# define _ggetDelleftMethod 18
# define _ggetDelrightL0Method 97
# define _ggetDelrightMethod 19
# define _ggetDelwordlefL0Method 98
# define _ggetDelwordlefMethod 20
# define _ggetDelwordleftL0Method 99
# define _ggetDelwordleftMethod 21
# define _ggetDelwordrigL0Method 100
# define _ggetDelwordrigMethod 22
# define _ggetDelwordrightL0Method 101
# define _ggetDelwordrightMethod 23
# define _ggetDestroyL0Method 102
# define _ggetDestroyMethod 24
# define _ggetDestroyonaAccess 25
# define _ggetDestroyonaAssign 26
# define _ggetDisplayL0Method 103
# define _ggetDisplayMethod 27
# define _ggetEditfastL0Method 104
# define _ggetEditfastMethod 28
# define _ggetEmptydateAccess 29
# define _ggetEndL0Method 105
# define _ggetEndMethod 30
# define _ggetExecMethod 31
# define _ggetFontL0Access 106
# define _ggetFontL0Assign 107
# define _ggetFontAccess 32
# define _ggetFontAssign 33
# define _ggetGetcurdataL0Method 108
# define _ggetGetcurdataMethod 34
# define _ggetGuiobj2varMethod 35
# define _ggetGuivar2objMethod 36
# define _ggetHandlerAccess 37
# define _ggetHandlerAssign 38
# define _ggetHasfocusAccess 39
# define _ggetHeightAccess 40
# define _ggetHeightAssign 41
# define _ggetHeightL0Method 109
# define _ggetHeightMethod 42
# define _ggetHittestL0Method 110
# define _ggetHittestMethod 43
# define _ggetHomeL0Method 111
# define _ggetHomeMethod 44
# define _ggetInitL0Method 112
# define _ggetInitMethod 45
# define _ggetInsertL0Method 113
# define _ggetInsertMethod 46
# define _ggetIsmultiunicodeL0Method 114
# define _ggetIsmultiunicodeMethod 47
# define _ggetKillfocusL0Method 115
# define _ggetKillfocusMethod 48
# define _ggetLeftL0Method 116
# define _ggetLeftMethod 49
# define _ggetMessageAccess 50
# define _ggetMessageAssign 51
# define _ggetMoveL0Method 117
# define _ggetMoveMethod 52
# define _ggetMultibyteAccess 53
# define _ggetMultibyteAssign 54
# define _ggetOriginalAccess 55
# define _ggetOverstrikeL0Method 118
# define _ggetOverstrikeMethod 56
# define _ggetPasteMethod 119
# define _ggetPictureAccess 57
# define _ggetPictureAssign 58
# define _ggetPosL0Access 120
# define _ggetPosAccess 59
# define _ggetRejectedL0Access 121
# define _ggetRejectedAccess 60
# define _ggetResetL0Method 122
# define _ggetResetMethod 61
# define _ggetRightL0Method 123
# define _ggetRightMethod 62
# define _ggetRowAccess 63
# define _ggetRowAssign 64
# define _ggetRowL0Method 124
# define _ggetRowMethod 65
# define _ggetSetcursorL0Method 125
# define _ggetSetcursorMethod 66
# define _ggetSetfocusL0Method 126
# define _ggetSetfocusMethod 67
# define _ggetShowMethod 68
# define _ggetTodecposL0Method 127
# define _ggetTodecposMethod 69
# define _ggetTooltipL0Access 128
# define _ggetTooltipL0Assign 129
# define _ggetTooltipAccess 70
# define _ggetTooltipAssign 71
# define _ggetTypeAccess 72
# define _ggetTypeoutAccess 73
# define _ggetUndoL0Method 130
# define _ggetUndoMethod 74
# define _ggetUntransforL0Method 131
# define _ggetUntransforMethod 75
# define _ggetUntransformL0Method 132
# define _ggetUntransformMethod 76
# define _ggetUpdatebuffL0Method 133
# define _ggetUpdatebuffMethod 77
# define _ggetUpdatebufferL0Method 134
# define _ggetUpdatebufferMethod 78
# define _ggetVargetL0Method 135
# define _ggetVargetMethod 79
# define _ggetVarputL0Method 136
# define _ggetVarputMethod 80
# define _ggetWidthAccess 81
# define _ggetWidthAssign 82
# define _ggetWidthL0Method 137
# define _ggetWidthMethod 83
# define _ggetWordleftMethod 84
# define _ggetWordrightMethod 85
# define _gget_a_flagProtect 2
# define _gget_block_getProtect 3
# define _gget_buff_begProtect 4
# define _gget_buff_lngProtect 5
# define _gget_colorselProtect 6
# define _gget_e_flagProtect 7
# define _gget_internProtect 8
# define _gget_orig_nameProtect 9
# define _gget_p_flagProtect 10
# define _gget_picfunctProtect 11
# define _gget_pict_lngProtect 12
# define _gget_pictemplProtect 13
# define _gget_s_flagProtect 14
# define _gget_tooltipProtect 15
# define _gget_var_evalProtect 16
# define _gget_var_ptrProtect 17
# define _gget_var_stypeProtect 18
# define _gget_x_flagProtect 19
# define _ggetAcolorProtect 20
# define _ggetAcurschangProtect 21
# define _ggetAguicursorInstance 22
# define _ggetBaddateProtect 23
# define _ggetBaddateInstance 24
# define _ggetBblockProtect 25
# define _ggetBhandlerProtect 26
# define _ggetBlockInstance 27
# define _ggetBufferInstance 28
# define _ggetCapcolInstance 29
# define _ggetCappictInstance 30
# define _ggetCaprowInstance 31
# define _ggetCaptionInstance 32
# define _ggetCargoInstance 33
# define _ggetCbmessageProtect 34
# define _ggetCbufferProtect 35
# define _ggetChangedInstance 36
# define _ggetClearInstance 37
# define _ggetColInstance 38
# define _ggetColorspecInstance 39
# define _ggetCtypeProtect 40
# define _ggetCvaltypeProtect 41
# define _ggetDecposProtect 42
# define _ggetDecposInstance 43
# define _ggetDestroyonaInstance 44
# define _ggetEmptydateProtect 45
# define _ggetEmptydateInstance 46
# define _ggetEnd2charInstance 47
# define _ggetErrvalblocInstance 48
# define _ggetExitstateInstance 49
# define _ggetFontInstance 50
# define _ggetGetenabledInstance 51
# define _ggetGetskipInstance 52
# define _ggetGuialignInstance 53
# define _ggetGuicappictInstance 54
# define _ggetGuicaptionInstance 55
# define _ggetGuicolInstance 56
# define _ggetGuicolorInstance 57
# define _ggetGuifastInstance 58
# define _ggetHandlerInstance 59
# define _ggetHasfocusInstance 60
# define _ggetHeightInstance 61
# define _ggetHome2charInstance 62
# define _ggetIposProtect 63
# define _ggetLchangedProtect 64
# define _ggetLdestroyaxProtect 65
# define _ggetLhasfocusProtect 66
# define _ggetLmultibyteProtect 67
# define _ggetMessageInstance 68
# define _ggetMinusInstance 69
# define _ggetMultibyteInstance 70
# define _ggetNameInstance 71
# define _ggetNcolProtect 72
# define _ggetNrowProtect 73
# define _ggetOfontProtect 74
# define _ggetOnclickactInstance 75
# define _ggetOnclickkeyInstance 76
# define _ggetOriginalInstance 77
# define _ggetPictureProtect 78
# define _ggetPictureInstance 79
# define _ggetPosInstance 80
# define _ggetPostblockInstance 81
# define _ggetPreblockInstance 82
# define _ggetReaderInstance 83
# define _ggetRejectedProtect 84
# define _ggetRejectedInstance 85
# define _ggetRowInstance 86
# define _ggetSubscriptInstance 87
# define _ggetTooltipInstance 88
# define _ggetTypeInstance 89
# define _ggetTypeoutProtect 90
# define _ggetTypeoutInstance 91
# define _ggetUserProtect 92
# define _ggetVoriginalProtect 93
# define _ggetWidthInstance 94
extern FSvar *_bb__tget_init_me FGS_ANSI((FSint, FSvar *[]));
# define _tgetAssignMethod 0
# define _tgetAxitMethod 1
# define _tgetBackspaceMethod 2
# define _tgetBaddateMethod 3
# define _tgetBaddateAccess 4
# define _tgetBlockAccess 5
# define _tgetBlockAssign 6
# define _tgetBufferAccess 7
# define _tgetBufferAssign 8
# define _tgetChangedAccess 9
# define _tgetClassnameMethod 10
# define _tgetColAccess 11
# define _tgetColAssign 12
# define _tgetColMethod 13
# define _tgetColordispMethod 14
# define _tgetDecposAccess 15
# define _tgetDelendMethod 16
# define _tgetDeleteMethod 17
# define _tgetDelleftMethod 18
# define _tgetDelrightMethod 19
# define _tgetDelwordlefMethod 20
# define _tgetDelwordleftMethod 21
# define _tgetDelwordrigMethod 22
# define _tgetDelwordrightMethod 23
# define _tgetDestroyMethod 24
# define _tgetDestroyonaAccess 25
# define _tgetDestroyonaAssign 26
# define _tgetDisplayMethod 27
# define _tgetEditfastMethod 28
# define _tgetEmptydateAccess 29
# define _tgetEndMethod 30
# define _tgetExecMethod 31
# define _tgetFontAccess 32
# define _tgetFontAssign 33
# define _tgetGetcurdataMethod 34
# define _tgetGuiobj2varMethod 35
# define _tgetGuivar2objMethod 36
# define _tgetHandlerAccess 37
# define _tgetHandlerAssign 38
# define _tgetHasfocusAccess 39
# define _tgetHeightAccess 40
# define _tgetHeightAssign 41
# define _tgetHeightMethod 42
# define _tgetHittestMethod 43
# define _tgetHomeMethod 44
# define _tgetInitL0Method 86
# define _tgetInitMethod 45
# define _tgetInsertMethod 46
# define _tgetIsmultiunicodeMethod 47
# define _tgetKillfocusMethod 48
# define _tgetLeftMethod 49
# define _tgetMessageAccess 50
# define _tgetMessageAssign 51
# define _tgetMoveMethod 52
# define _tgetMultibyteAccess 53
# define _tgetMultibyteAssign 54
# define _tgetOriginalAccess 55
# define _tgetOverstrikeMethod 56
# define _tgetPictureAccess 57
# define _tgetPictureAssign 58
# define _tgetPosAccess 59
# define _tgetRejectedAccess 60
# define _tgetResetMethod 61
# define _tgetRightMethod 62
# define _tgetRowAccess 63
# define _tgetRowAssign 64
# define _tgetRowMethod 65
# define _tgetSetcursorMethod 66
# define _tgetSetfocusMethod 67
# define _tgetShowMethod 68
# define _tgetTodecposMethod 69
# define _tgetTooltipAccess 70
# define _tgetTooltipAssign 71
# define _tgetTypeAccess 72
# define _tgetTypeoutAccess 73
# define _tgetUndoMethod 74
# define _tgetUntransforMethod 75
# define _tgetUntransformMethod 76
# define _tgetUpdatebuffMethod 77
# define _tgetUpdatebufferMethod 78
# define _tgetVargetMethod 79
# define _tgetVarputMethod 80
# define _tgetWidthAccess 81
# define _tgetWidthAssign 82
# define _tgetWidthMethod 83
# define _tgetWordleftMethod 84
# define _tgetWordrightMethod 85
# define _tget_a_flagProtect 2
# define _tget_block_getProtect 3
# define _tget_buff_begProtect 4
# define _tget_buff_lngProtect 5
# define _tget_colorselProtect 6
# define _tget_e_flagProtect 7
# define _tget_internProtect 8
# define _tget_orig_nameProtect 9
# define _tget_p_flagProtect 10
# define _tget_picfunctProtect 11
# define _tget_pict_lngProtect 12
# define _tget_pictemplProtect 13
# define _tget_s_flagProtect 14
# define _tget_tooltipProtect 15
# define _tget_var_evalProtect 16
# define _tget_var_ptrProtect 17
# define _tget_var_stypeProtect 18
# define _tget_x_flagProtect 19
# define _tgetAcolorProtect 20
# define _tgetAcurschangProtect 21
# define _tgetAguicursorInstance 22
# define _tgetBaddateProtect 23
# define _tgetBaddateInstance 24
# define _tgetBblockProtect 25
# define _tgetBhandlerProtect 26
# define _tgetBlockInstance 27
# define _tgetBufferInstance 28
# define _tgetCapcolInstance 29
# define _tgetCappictInstance 30
# define _tgetCaprowInstance 31
# define _tgetCaptionInstance 32
# define _tgetCargoInstance 33
# define _tgetCbmessageProtect 34
# define _tgetCbufferProtect 35
# define _tgetChangedInstance 36
# define _tgetClearInstance 37
# define _tgetColInstance 38
# define _tgetColorspecInstance 39
# define _tgetCtypeProtect 40
# define _tgetCvaltypeProtect 41
# define _tgetDecposProtect 42
# define _tgetDecposInstance 43
# define _tgetDestroyonaInstance 44
# define _tgetEmptydateProtect 45
# define _tgetEmptydateInstance 46
# define _tgetEnd2charInstance 47
# define _tgetErrvalblocInstance 48
# define _tgetExitstateInstance 49
# define _tgetFontInstance 50
# define _tgetGetenabledInstance 51
# define _tgetGetskipInstance 52
# define _tgetGuialignInstance 53
# define _tgetGuicappictInstance 54
# define _tgetGuicaptionInstance 55
# define _tgetGuicolInstance 56
# define _tgetGuicolorInstance 57
# define _tgetGuifastInstance 58
# define _tgetHandlerInstance 59
# define _tgetHasfocusInstance 60
# define _tgetHeightInstance 61
# define _tgetHome2charInstance 62
# define _tgetIposProtect 63
# define _tgetLchangedProtect 64
# define _tgetLdestroyaxProtect 65
# define _tgetLhasfocusProtect 66
# define _tgetLmultibyteProtect 67
# define _tgetMessageInstance 68
# define _tgetMinusInstance 69
# define _tgetMultibyteInstance 70
# define _tgetNameInstance 71
# define _tgetNcolProtect 72
# define _tgetNrowProtect 73
# define _tgetOfontProtect 74
# define _tgetOnclickactInstance 75
# define _tgetOnclickkeyInstance 76
# define _tgetOriginalInstance 77
# define _tgetPictureProtect 78
# define _tgetPictureInstance 79
# define _tgetPosInstance 80
# define _tgetPostblockInstance 81
# define _tgetPreblockInstance 82
# define _tgetReaderInstance 83
# define _tgetRejectedProtect 84
# define _tgetRejectedInstance 85
# define _tgetRowInstance 86
# define _tgetSubscriptInstance 87
# define _tgetTooltipInstance 88
# define _tgetTypeInstance 89
# define _tgetTypeoutProtect 90
# define _tgetTypeoutInstance 91
# define _tgetUserProtect 92
# define _tgetVoriginalProtect 93
# define _tgetWidthInstance 94
# define _bgetAssignMethod 0
# define _bgetAxitMethod 1
# define _bgetBackspaceMethod 2
# define _bgetBaddateMethod 3
# define _bgetBaddateAccess 4
# define _bgetBlockAccess 5
# define _bgetBlockAssign 6
# define _bgetBufferAccess 7
# define _bgetBufferAssign 8
# define _bgetChangedAccess 9
# define _bgetClassnameMethod 10
# define _bgetColAccess 11
# define _bgetColAssign 12
# define _bgetColMethod 13
# define _bgetColordispMethod 14
# define _bgetDecposAccess 15
# define _bgetDelendMethod 16
# define _bgetDeleteMethod 17
# define _bgetDelleftMethod 18
# define _bgetDelrightMethod 19
# define _bgetDelwordlefMethod 20
# define _bgetDelwordleftMethod 21
# define _bgetDelwordrigMethod 22
# define _bgetDelwordrightMethod 23
# define _bgetDestroyMethod 24
# define _bgetDestroyonaAccess 25
# define _bgetDestroyonaAssign 26
# define _bgetDisplayMethod 27
# define _bgetEditfastMethod 28
# define _bgetEmptydateAccess 29
# define _bgetEndMethod 30
# define _bgetExecMethod 31
# define _bgetFontAccess 32
# define _bgetFontAssign 33
# define _bgetGetcurdataMethod 34
# define _bgetGuiobj2varMethod 35
# define _bgetGuivar2objMethod 36
# define _bgetHandlerAccess 37
# define _bgetHandlerAssign 38
# define _bgetHasfocusAccess 39
# define _bgetHeightAccess 40
# define _bgetHeightAssign 41
# define _bgetHeightMethod 42
# define _bgetHittestMethod 43
# define _bgetHomeMethod 44
# define _bgetInitMethod 45
# define _bgetInsertMethod 46
# define _bgetIsmultiunicodeMethod 47
# define _bgetKillfocusMethod 48
# define _bgetLeftMethod 49
# define _bgetMessageAccess 50
# define _bgetMessageAssign 51
# define _bgetMoveMethod 52
# define _bgetMultibyteAccess 53
# define _bgetMultibyteAssign 54
# define _bgetOriginalAccess 55
# define _bgetOverstrikeMethod 56
# define _bgetPictureAccess 57
# define _bgetPictureAssign 58
# define _bgetPosAccess 59
# define _bgetRejectedAccess 60
# define _bgetResetMethod 61
# define _bgetRightMethod 62
# define _bgetRowAccess 63
# define _bgetRowAssign 64
# define _bgetRowMethod 65
# define _bgetSetcursorMethod 66
# define _bgetSetfocusMethod 67
# define _bgetShowMethod 68
# define _bgetTodecposMethod 69
# define _bgetTooltipAccess 70
# define _bgetTooltipAssign 71
# define _bgetTypeAccess 72
# define _bgetTypeoutAccess 73
# define _bgetUndoMethod 74
# define _bgetUntransforMethod 75
# define _bgetUntransformMethod 76
# define _bgetUpdatebuffMethod 77
# define _bgetUpdatebufferMethod 78
# define _bgetVargetMethod 79
# define _bgetVarputMethod 80
# define _bgetWidthAccess 81
# define _bgetWidthAssign 82
# define _bgetWidthMethod 83
# define _bgetWordleftMethod 84
# define _bgetWordrightMethod 85
# define _bget_a_flagProtect 2
# define _bget_block_getProtect 3
# define _bget_buff_begProtect 4
# define _bget_buff_lngProtect 5
# define _bget_colorselProtect 6
# define _bget_e_flagProtect 7
# define _bget_internProtect 8
# define _bget_orig_nameProtect 9
# define _bget_p_flagProtect 10
# define _bget_picfunctProtect 11
# define _bget_pict_lngProtect 12
# define _bget_pictemplProtect 13
# define _bget_s_flagProtect 14
# define _bget_tooltipProtect 15
# define _bget_var_evalProtect 16
# define _bget_var_ptrProtect 17
# define _bget_var_stypeProtect 18
# define _bget_x_flagProtect 19
# define _bgetAcolorProtect 20
# define _bgetAcurschangProtect 21
# define _bgetAguicursorInstance 22
# define _bgetBaddateProtect 23
# define _bgetBaddateInstance 24
# define _bgetBblockProtect 25
# define _bgetBhandlerProtect 26
# define _bgetBlockInstance 27
# define _bgetBufferInstance 28
# define _bgetCapcolInstance 29
# define _bgetCappictInstance 30
# define _bgetCaprowInstance 31
# define _bgetCaptionInstance 32
# define _bgetCargoInstance 33
# define _bgetCbmessageProtect 34
# define _bgetCbufferProtect 35
# define _bgetChangedInstance 36
# define _bgetClearInstance 37
# define _bgetColInstance 38
# define _bgetColorspecInstance 39
# define _bgetCtypeProtect 40
# define _bgetCvaltypeProtect 41
# define _bgetDecposProtect 42
# define _bgetDecposInstance 43
# define _bgetDestroyonaInstance 44
# define _bgetEmptydateProtect 45
# define _bgetEmptydateInstance 46
# define _bgetEnd2charInstance 47
# define _bgetErrvalblocInstance 48
# define _bgetExitstateInstance 49
# define _bgetFontInstance 50
# define _bgetGetenabledInstance 51
# define _bgetGetskipInstance 52
# define _bgetGuialignInstance 53
# define _bgetGuicappictInstance 54
# define _bgetGuicaptionInstance 55
# define _bgetGuicolInstance 56
# define _bgetGuicolorInstance 57
# define _bgetGuifastInstance 58
# define _bgetHandlerInstance 59
# define _bgetHasfocusInstance 60
# define _bgetHeightInstance 61
# define _bgetHome2charInstance 62
# define _bgetIposProtect 63
# define _bgetLchangedProtect 64
# define _bgetLdestroyaxProtect 65
# define _bgetLhasfocusProtect 66
# define _bgetLmultibyteProtect 67
# define _bgetMessageInstance 68
# define _bgetMinusInstance 69
# define _bgetMultibyteInstance 70
# define _bgetNameInstance 71
# define _bgetNcolProtect 72
# define _bgetNrowProtect 73
# define _bgetOfontProtect 74
# define _bgetOnclickactInstance 75
# define _bgetOnclickkeyInstance 76
# define _bgetOriginalInstance 77
# define _bgetPictureProtect 78
# define _bgetPictureInstance 79
# define _bgetPosInstance 80
# define _bgetPostblockInstance 81
# define _bgetPreblockInstance 82
# define _bgetReaderInstance 83
# define _bgetRejectedProtect 84
# define _bgetRejectedInstance 85
# define _bgetRowInstance 86
# define _bgetSubscriptInstance 87
# define _bgetTooltipInstance 88
# define _bgetTypeInstance 89
# define _bgetTypeoutProtect 90
# define _bgetTypeoutInstance 91
# define _bgetUserProtect 92
# define _bgetVoriginalProtect 93
# define _bgetWidthInstance 94
# define ErrorArgInstance 2
# define ErrorArgnumInstance 3
# define ErrorArgsInstance 4
# define ErrorArgtypereqInstance 5
# define ErrorCallfuncsyInstance 6
# define ErrorCandefaultInstance 7
# define ErrorCanretryInstance 8
# define ErrorCansubstitInstance 9
# define ErrorCargoInstance 10
# define ErrorChoiceInstance 11
# define ErrorDescriptioInstance 12
# define ErrorFilehandleInstance 13
# define ErrorFilenameInstance 14
# define ErrorFuncptrInstance 15
# define ErrorFuncsymInstance 16
# define ErrorGencodeInstance 17
# define ErrorMaxsizeInstance 18
# define ErrorMethodselfInstance 19
# define ErrorOperationInstance 20
# define ErrorOscodeInstance 21
# define ErrorSeverityInstance 22
# define ErrorSubcodeInstance 23
# define ErrorSubcodetexInstance 24
# define ErrorSubstituteInstance 25
# define ErrorSubsystemInstance 26
# define ErrorTriesInstance 27
extern FSvar *_bb__tbrowse_addcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_applykey_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_autorefres_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_autorefres_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_autorefresh_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_bof_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_border_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_border_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_classname_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_col_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_coladjust_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_coladjust_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_colcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_colorrect_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_colorspec_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_colorspec_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_colpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_colpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_colsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_colsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_colsepeof_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_colsepeof_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_colvisiblecoord_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_colvisiblewidth_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_colwidth_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_configure_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_data_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_datachange_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_datachange_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_dbalias_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_dehilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_delcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_destroy_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_display_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_down_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_enablemous_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_enablemous_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_eof_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_exec_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_footsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_footsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_forcestabl_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_forcestable_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_freeze_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_freeze_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_getcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_gobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_gobottombl_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_gobottombl_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_gomousepos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_gotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_gotopblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_gotopblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_guicolorsp_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_guicolorsp_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_guifontspe_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_guifontspe_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_guigrid_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_guigrid_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_guiobj2var_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_guivar2obj_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_handler_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_handler_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_headsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_headsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_headstyle_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_hide_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_hilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_hitbottom_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_hitbottom_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_hittest_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_hittop_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_hittop_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_hscrollbar_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_inscolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_invalidate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_killfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_leftvisibl_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_linecursor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_linecursor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_mcolpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_mcolpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_message_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_message_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_mouseon_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_mrowpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_mrowpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_nbottom_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_nbottom_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_nbottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_nleft_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_nleft_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_nleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_nright_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_nright_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_nright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_ntop_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_ntop_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_ntop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_pagedown_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_pageskip_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_pageskip_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_pageup_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_panend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_panhome_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_panleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_panright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_readonly_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_readonly_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_refreshall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_refreshcur_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_refreshcurrent_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_rightvisib_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_row_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_rowcache_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_rowcache_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_rowcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_rowheight_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_rowheight_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_rowpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_rowpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_scrollleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_scrollright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_setcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_setfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_setkey_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_setkeydef_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_setstyle_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_show_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_skipblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_skipblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_stabilize_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_stable_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_stable_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_timeout_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_timeout_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_tooltip_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_tooltip_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_trim_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_trim_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbrowse_up_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbrowse_visible_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbrowse_vscrollbar_as FGS_ANSI((FSvar *, FSvar *));
# define _tbrowseAddcolumnMethod 0
# define _tbrowseApplykeyMethod 1
# define _tbrowseAutorefresAccess 2
# define _tbrowseAutorefresAssign 3
# define _tbrowseAutorefreshMethod 4
# define _tbrowseAxitMethod 5
# define _tbrowseBofMethod 6
# define _tbrowseBorderAccess 7
# define _tbrowseBorderAssign 8
# define _tbrowseClassnameMethod 9
# define _tbrowseColMethod 10
# define _tbrowseColadjustAccess 11
# define _tbrowseColadjustAssign 12
# define _tbrowseColcountAccess 13
# define _tbrowseColorrectMethod 14
# define _tbrowseColorspecAccess 15
# define _tbrowseColorspecAssign 16
# define _tbrowseColposAccess 17
# define _tbrowseColposAssign 18
# define _tbrowseColsepAccess 19
# define _tbrowseColsepAssign 20
# define _tbrowseColsepeofAccess 21
# define _tbrowseColsepeofAssign 22
# define _tbrowseColvisiblecoordMethod 23
# define _tbrowseColvisiblewidthMethod 24
# define _tbrowseColwidthMethod 25
# define _tbrowseConfigureMethod 26
# define _tbrowseDataMethod 27
# define _tbrowseDatachangeAccess 28
# define _tbrowseDatachangeAssign 29
# define _tbrowseDbaliasAccess 30
# define _tbrowseDehiliteMethod 31
# define _tbrowseDelcolumnMethod 32
# define _tbrowseDestroyMethod 33
# define _tbrowseDisplayMethod 34
# define _tbrowseDownMethod 35
# define _tbrowseEnablemousAccess 36
# define _tbrowseEnablemousAssign 37
# define _tbrowseEndMethod 38
# define _tbrowseEofMethod 39
# define _tbrowseExecMethod 40
# define _tbrowseFootsepAccess 41
# define _tbrowseFootsepAssign 42
# define _tbrowseForcestablMethod 43
# define _tbrowseForcestableMethod 44
# define _tbrowseFreezeAccess 45
# define _tbrowseFreezeAssign 46
# define _tbrowseGetcolumnMethod 47
# define _tbrowseGobottomMethod 48
# define _tbrowseGobottomblAccess 49
# define _tbrowseGobottomblAssign 50
# define _tbrowseGomouseposMethod 51
# define _tbrowseGotopMethod 52
# define _tbrowseGotopblockAccess 53
# define _tbrowseGotopblockAssign 54
# define _tbrowseGuicolorspAccess 55
# define _tbrowseGuicolorspAssign 56
# define _tbrowseGuifontspeAccess 57
# define _tbrowseGuifontspeAssign 58
# define _tbrowseGuigridAccess 59
# define _tbrowseGuigridAssign 60
# define _tbrowseGuiobj2varMethod 61
# define _tbrowseGuivar2objMethod 62
# define _tbrowseHandlerAccess 63
# define _tbrowseHandlerAssign 64
# define _tbrowseHeadsepAccess 65
# define _tbrowseHeadsepAssign 66
# define _tbrowseHeadstyleMethod 67
# define _tbrowseHideMethod 68
# define _tbrowseHiliteMethod 69
# define _tbrowseHitbottomAccess 70
# define _tbrowseHitbottomAssign 71
# define _tbrowseHittestMethod 72
# define _tbrowseHittopAccess 73
# define _tbrowseHittopAssign 74
# define _tbrowseHomeMethod 75
# define _tbrowseHscrollbarAssign 76
# define _tbrowseInitMethod 77
# define _tbrowseInscolumnMethod 78
# define _tbrowseInvalidateMethod 79
# define _tbrowseKillfocusMethod 80
# define _tbrowseLeftMethod 81
# define _tbrowseLeftvisiblAccess 82
# define _tbrowseLinecursorAccess 83
# define _tbrowseLinecursorAssign 84
# define _tbrowseMcolposAccess 85
# define _tbrowseMcolposAssign 86
# define _tbrowseMessageAccess 87
# define _tbrowseMessageAssign 88
# define _tbrowseMouseonMethod 89
# define _tbrowseMrowposAccess 90
# define _tbrowseMrowposAssign 91
# define _tbrowseNbottomAccess 92
# define _tbrowseNbottomAssign 93
# define _tbrowseNbottomMethod 94
# define _tbrowseNleftAccess 95
# define _tbrowseNleftAssign 96
# define _tbrowseNleftMethod 97
# define _tbrowseNrightAccess 98
# define _tbrowseNrightAssign 99
# define _tbrowseNrightMethod 100
# define _tbrowseNtopAccess 101
# define _tbrowseNtopAssign 102
# define _tbrowseNtopMethod 103
# define _tbrowsePagedownMethod 104
# define _tbrowsePageskipAccess 105
# define _tbrowsePageskipAssign 106
# define _tbrowsePageupMethod 107
# define _tbrowsePanendMethod 108
# define _tbrowsePanhomeMethod 109
# define _tbrowsePanleftMethod 110
# define _tbrowsePanrightMethod 111
# define _tbrowseReadonlyAccess 112
# define _tbrowseReadonlyAssign 113
# define _tbrowseRefreshallMethod 114
# define _tbrowseRefreshcurMethod 115
# define _tbrowseRefreshcurrentMethod 116
# define _tbrowseRightMethod 117
# define _tbrowseRightvisibAccess 118
# define _tbrowseRowMethod 119
# define _tbrowseRowcacheAccess 120
# define _tbrowseRowcacheAssign 121
# define _tbrowseRowcountAccess 122
# define _tbrowseRowheightAccess 123
# define _tbrowseRowheightAssign 124
# define _tbrowseRowposAccess 125
# define _tbrowseRowposAssign 126
# define _tbrowseScrollleftMethod 127
# define _tbrowseScrollrightMethod 128
# define _tbrowseSetcolumnMethod 129
# define _tbrowseSetfocusMethod 130
# define _tbrowseSetkeyMethod 131
# define _tbrowseSetkeydefMethod 132
# define _tbrowseSetstyleMethod 133
# define _tbrowseShowMethod 134
# define _tbrowseSkipblockAccess 135
# define _tbrowseSkipblockAssign 136
# define _tbrowseStabilizeMethod 137
# define _tbrowseStableAccess 138
# define _tbrowseStableAssign 139
# define _tbrowseTimeoutAccess 140
# define _tbrowseTimeoutAssign 141
# define _tbrowseTooltipAccess 142
# define _tbrowseTooltipAssign 143
# define _tbrowseTrimAccess 144
# define _tbrowseTrimAssign 145
# define _tbrowseUpMethod 146
# define _tbrowseVisibleAccess 147
# define _tbrowseVscrollbarAssign 148
# define _tbrowse_cr_bg_colProtect 2
# define _tbrowse_cr_bottomProtect 3
# define _tbrowse_cr_fg_colProtect 4
# define _tbrowse_cr_leftProtect 5
# define _tbrowse_cr_rightProtect 6
# define _tbrowse_cr_topProtect 7
# define _tbrowse_fcolProtect 8
# define _tbrowse_iscreenProtect 9
# define _tbrowse_n_olineProtect 10
# define _tbrowse_n_stableProtect 11
# define _tbrowse_noffsetProtect 12
# define _tbrowse_var_ptrInstance 13
# define _tbrowseAcolorspecProtect 14
# define _tbrowseAhidesaveProtect 15
# define _tbrowseAinitsaveProtect 16
# define _tbrowseAofontspecProtect 17
# define _tbrowseAotbcolumnProtect 18
# define _tbrowseApfontinteProtect 19
# define _tbrowseAsetkeyProtect 20
# define _tbrowseAsetstyleProtect 21
# define _tbrowseAutoliteInstance 22
# define _tbrowseAutorefresInstance 23
# define _tbrowseBdatachangProtect 24
# define _tbrowseBgobottombProtect 25
# define _tbrowseBgotopblocProtect 26
# define _tbrowseBhandlerProtect 27
# define _tbrowseBlockInstance 28
# define _tbrowseBorderInstance 29
# define _tbrowseBskipblockProtect 30
# define _tbrowseCanappendInstance 31
# define _tbrowseCandeleteInstance 32
# define _tbrowseCaneditInstance 33
# define _tbrowseCargoInstance 34
# define _tbrowseCborderProtect 35
# define _tbrowseCcolorspecProtect 36
# define _tbrowseCcolsepProtect 37
# define _tbrowseCdbaliasProtect 38
# define _tbrowseCfootsepProtect 39
# define _tbrowseCheadsepProtect 40
# define _tbrowseCmessageProtect 41
# define _tbrowseColadjustInstance 42
# define _tbrowseColcountInstance 43
# define _tbrowseColorspecInstance 44
# define _tbrowseColposInstance 45
# define _tbrowseColsepInstance 46
# define _tbrowseColsepeofInstance 47
# define _tbrowseCtooltipProtect 48
# define _tbrowseDatachangeInstance 49
# define _tbrowseDbaliasInstance 50
# define _tbrowseDevwarningInstance 51
# define _tbrowseDispldeletInstance 52
# define _tbrowseDisplmessaInstance 53
# define _tbrowseEnablemousInstance 54
# define _tbrowseErrvalblocInstance 55
# define _tbrowseExitstateInstance 56
# define _tbrowseFootsepInstance 57
# define _tbrowseFreezeInstance 58
# define _tbrowseGetenabledInstance 59
# define _tbrowseGetskipInstance 60
# define _tbrowseGobottomblInstance 61
# define _tbrowseGotopblockInstance 62
# define _tbrowseGuialignInstance 63
# define _tbrowseGuicappictInstance 64
# define _tbrowseGuicaptionInstance 65
# define _tbrowseGuicolInstance 66
# define _tbrowseGuicolorspInstance 67
# define _tbrowseGuifontspeInstance 68
# define _tbrowseGuigridInstance 69
# define _tbrowseHandlerInstance 70
# define _tbrowseHeadsepInstance 71
# define _tbrowseHitbottomInstance 72
# define _tbrowseHittopInstance 73
# define _tbrowseHscrollbarInstance 74
# define _tbrowseIbottomProtect 75
# define _tbrowseIcoladjustProtect 76
# define _tbrowseIcolcountProtect 77
# define _tbrowseIcolposProtect 78
# define _tbrowseIdbfupdateProtect 79
# define _tbrowseIfreezeProtect 80
# define _tbrowseIleftProtect 81
# define _tbrowseIleftvisibProtect 82
# define _tbrowseIlinecursoProtect 83
# define _tbrowseIncrsearchInstance 84
# define _tbrowseIpageskipProtect 85
# define _tbrowseIrightProtect 86
# define _tbrowseIrightvisiProtect 87
# define _tbrowseIrowcountProtect 88
# define _tbrowseIrowposProtect 89
# define _tbrowseIstablemodProtect 90
# define _tbrowseItbridProtect 91
# define _tbrowseItopProtect 92
# define _tbrowseIusersProtect 93
# define _tbrowseLbofProtect 94
# define _tbrowseLcanappendProtect 95
# define _tbrowseLcolsepeofProtect 96
# define _tbrowseLdatachangProtect 97
# define _tbrowseLeftvisiblInstance 98
# define _tbrowseLeofProtect 99
# define _tbrowseLguigridProtect 100
# define _tbrowseLheadermulProtect 101
# define _tbrowseLhitbottomProtect 102
# define _tbrowseLhittopProtect 103
# define _tbrowseLinecursorInstance 104
# define _tbrowseLisvisibleProtect 105
# define _tbrowseLmouseonProtect 106
# define _tbrowseLreadonlyProtect 107
# define _tbrowseLresizeablProtect 108
# define _tbrowseLsetptrProtect 109
# define _tbrowseLstableProtect 110
# define _tbrowseLtrimProtect 111
# define _tbrowseMcolposInstance 112
# define _tbrowseMessageInstance 113
# define _tbrowseMrowposInstance 114
# define _tbrowseNameInstance 115
# define _tbrowseNautoreflaProtect 116
# define _tbrowseNautorefreProtect 117
# define _tbrowseNbottomInstance 118
# define _tbrowseNleftInstance 119
# define _tbrowseNrightInstance 120
# define _tbrowseNtimeoutProtect 121
# define _tbrowseNtopInstance 122
# define _tbrowseOdefcolorpProtect 123
# define _tbrowseOhighcolorProtect 124
# define _tbrowseOnclickactInstance 125
# define _tbrowseOnclickkeyInstance 126
# define _tbrowseOnupdateInstance 127
# define _tbrowsePageskipInstance 128
# define _tbrowsePostblockInstance 129
# define _tbrowsePreblockInstance 130
# define _tbrowseReaderInstance 131
# define _tbrowseReadonlyInstance 132
# define _tbrowseRightvisibInstance 133
# define _tbrowseRowcacheInstance 134
# define _tbrowseRowcountInstance 135
# define _tbrowseRowheightInstance 136
# define _tbrowseRowposInstance 137
# define _tbrowseSelectedcoInstance 138
# define _tbrowseSelectedreInstance 139
# define _tbrowseSelectedroInstance 140
# define _tbrowseSelectedvaInstance 141
# define _tbrowseSkipblockInstance 142
# define _tbrowseStableInstance 143
# define _tbrowseSubscriptInstance 144
# define _tbrowseTimeoutInstance 145
# define _tbrowseTooltipInstance 146
# define _tbrowseTrimInstance 147
# define _tbrowseTypeoutInstance 148
# define _tbrowseUpdatedInstance 149
# define _tbrowseUserarrayInstance 150
# define _tbrowseUserarraypInstance 151
# define _tbrowseVisibleInstance 152
# define _tbrowseVscrollbarInstance 153
extern FSvar *_bb__gtbrowse__datachanged_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse__id_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse__id_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_addcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_coladjust_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_colorrect_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_colpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_colpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_colsepeof_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_colvisiblecoord_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_colvisiblewidth_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_colwidth_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_delcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_down_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_enablemous_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_enablemous_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_gobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_gotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_guifontspe_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_guigrid_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_headstyle_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_hide_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_hilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_hittest_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_hscrollbar_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_inscolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_invalidate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_leftvisibl_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_mouseon_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_nbottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_nleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_nright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_ntop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_pagedown_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_pageskip_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_pageskip_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_pageup_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_panend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_panhome_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_panleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_panright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_refreshall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_refreshcurrent_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_rightvisib_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_rowcache_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_rowcache_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_rowcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_rowheight_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_rowheight_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_rowpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_setcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_setselfptr_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_show_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_stabilize_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_stable_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbrowse_stable_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_tooltip_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbrowse_up_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbrowse_vscrollbar_as FGS_ANSI((FSvar *, FSvar *));
# define _gtbrowse_datachangedMethod 149
# define _gtbrowse_idAccess 150
# define _gtbrowse_idAssign 151
# define _gtbrowseAddcolumnL0Method 152
# define _gtbrowseAddcolumnMethod 0
# define _gtbrowseApplykeyMethod 1
# define _gtbrowseAutorefresAccess 2
# define _gtbrowseAutorefresAssign 3
# define _gtbrowseAutorefreshMethod 4
# define _gtbrowseAxitL0Method 153
# define _gtbrowseAxitMethod 5
# define _gtbrowseBofMethod 6
# define _gtbrowseBorderAccess 7
# define _gtbrowseBorderAssign 8
# define _gtbrowseClassnameMethod 9
# define _gtbrowseColMethod 10
# define _gtbrowseColadjustAccess 11
# define _gtbrowseColadjustL0Assign 154
# define _gtbrowseColadjustAssign 12
# define _gtbrowseColcountAccess 13
# define _gtbrowseColorrectL0Method 155
# define _gtbrowseColorrectMethod 14
# define _gtbrowseColorspecAccess 15
# define _gtbrowseColorspecAssign 16
# define _gtbrowseColposL0Access 156
# define _gtbrowseColposL0Assign 157
# define _gtbrowseColposAccess 17
# define _gtbrowseColposAssign 18
# define _gtbrowseColsepAccess 19
# define _gtbrowseColsepAssign 20
# define _gtbrowseColsepeofAccess 21
# define _gtbrowseColsepeofL0Assign 158
# define _gtbrowseColsepeofAssign 22
# define _gtbrowseColvisiblecoordL0Method 159
# define _gtbrowseColvisiblecoordMethod 23
# define _gtbrowseColvisiblewidthL0Method 160
# define _gtbrowseColvisiblewidthMethod 24
# define _gtbrowseColwidthL0Method 161
# define _gtbrowseColwidthMethod 25
# define _gtbrowseConfigureMethod 26
# define _gtbrowseDataMethod 27
# define _gtbrowseDatachangeAccess 28
# define _gtbrowseDatachangeAssign 29
# define _gtbrowseDbaliasAccess 30
# define _gtbrowseDehiliteMethod 31
# define _gtbrowseDelcolumnL0Method 162
# define _gtbrowseDelcolumnMethod 32
# define _gtbrowseDestroyMethod 33
# define _gtbrowseDisplayMethod 34
# define _gtbrowseDownL0Method 163
# define _gtbrowseDownMethod 35
# define _gtbrowseEnablemousL0Access 164
# define _gtbrowseEnablemousL0Assign 165
# define _gtbrowseEnablemousAccess 36
# define _gtbrowseEnablemousAssign 37
# define _gtbrowseEndL0Method 166
# define _gtbrowseEndMethod 38
# define _gtbrowseEofMethod 39
# define _gtbrowseExecMethod 40
# define _gtbrowseFootsepAccess 41
# define _gtbrowseFootsepAssign 42
# define _gtbrowseForcestablMethod 43
# define _gtbrowseForcestableMethod 44
# define _gtbrowseFreezeAccess 45
# define _gtbrowseFreezeAssign 46
# define _gtbrowseGetcolumnMethod 47
# define _gtbrowseGobottomL0Method 167
# define _gtbrowseGobottomMethod 48
# define _gtbrowseGobottomblAccess 49
# define _gtbrowseGobottomblAssign 50
# define _gtbrowseGomouseposMethod 51
# define _gtbrowseGotopL0Method 168
# define _gtbrowseGotopMethod 52
# define _gtbrowseGotopblockAccess 53
# define _gtbrowseGotopblockAssign 54
# define _gtbrowseGuicolorspAccess 55
# define _gtbrowseGuicolorspAssign 56
# define _gtbrowseGuifontspeAccess 57
# define _gtbrowseGuifontspeL0Assign 169
# define _gtbrowseGuifontspeAssign 58
# define _gtbrowseGuigridAccess 59
# define _gtbrowseGuigridL0Assign 170
# define _gtbrowseGuigridAssign 60
# define _gtbrowseGuiobj2varMethod 61
# define _gtbrowseGuivar2objMethod 62
# define _gtbrowseHandlerAccess 63
# define _gtbrowseHandlerAssign 64
# define _gtbrowseHeadsepAccess 65
# define _gtbrowseHeadsepAssign 66
# define _gtbrowseHeadstyleL0Method 171
# define _gtbrowseHeadstyleMethod 67
# define _gtbrowseHideL0Method 172
# define _gtbrowseHideMethod 68
# define _gtbrowseHiliteL0Method 173
# define _gtbrowseHiliteMethod 69
# define _gtbrowseHitbottomAccess 70
# define _gtbrowseHitbottomAssign 71
# define _gtbrowseHittestL0Method 174
# define _gtbrowseHittestMethod 72
# define _gtbrowseHittopAccess 73
# define _gtbrowseHittopAssign 74
# define _gtbrowseHomeL0Method 175
# define _gtbrowseHomeMethod 75
# define _gtbrowseHscrollbarL0Assign 176
# define _gtbrowseHscrollbarAssign 76
# define _gtbrowseInitL0Method 177
# define _gtbrowseInitMethod 77
# define _gtbrowseInscolumnL0Method 178
# define _gtbrowseInscolumnMethod 78
# define _gtbrowseInvalidateL0Method 179
# define _gtbrowseInvalidateMethod 79
# define _gtbrowseKillfocusMethod 80
# define _gtbrowseLeftL0Method 180
# define _gtbrowseLeftMethod 81
# define _gtbrowseLeftvisiblL0Access 181
# define _gtbrowseLeftvisiblAccess 82
# define _gtbrowseLinecursorAccess 83
# define _gtbrowseLinecursorAssign 84
# define _gtbrowseMcolposAccess 85
# define _gtbrowseMcolposAssign 86
# define _gtbrowseMessageAccess 87
# define _gtbrowseMessageAssign 88
# define _gtbrowseMouseonL0Method 182
# define _gtbrowseMouseonMethod 89
# define _gtbrowseMrowposAccess 90
# define _gtbrowseMrowposAssign 91
# define _gtbrowseNbottomAccess 92
# define _gtbrowseNbottomAssign 93
# define _gtbrowseNbottomL0Method 183
# define _gtbrowseNbottomMethod 94
# define _gtbrowseNleftAccess 95
# define _gtbrowseNleftAssign 96
# define _gtbrowseNleftL0Method 184
# define _gtbrowseNleftMethod 97
# define _gtbrowseNrightAccess 98
# define _gtbrowseNrightAssign 99
# define _gtbrowseNrightL0Method 185
# define _gtbrowseNrightMethod 100
# define _gtbrowseNtopAccess 101
# define _gtbrowseNtopAssign 102
# define _gtbrowseNtopL0Method 186
# define _gtbrowseNtopMethod 103
# define _gtbrowsePagedownL0Method 187
# define _gtbrowsePagedownMethod 104
# define _gtbrowsePageskipL0Access 188
# define _gtbrowsePageskipL0Assign 189
# define _gtbrowsePageskipAccess 105
# define _gtbrowsePageskipAssign 106
# define _gtbrowsePageupL0Method 190
# define _gtbrowsePageupMethod 107
# define _gtbrowsePanendL0Method 191
# define _gtbrowsePanendMethod 108
# define _gtbrowsePanhomeL0Method 192
# define _gtbrowsePanhomeMethod 109
# define _gtbrowsePanleftL0Method 193
# define _gtbrowsePanleftMethod 110
# define _gtbrowsePanrightL0Method 194
# define _gtbrowsePanrightMethod 111
# define _gtbrowseReadonlyAccess 112
# define _gtbrowseReadonlyAssign 113
# define _gtbrowseRefreshallL0Method 195
# define _gtbrowseRefreshallMethod 114
# define _gtbrowseRefreshcurMethod 115
# define _gtbrowseRefreshcurrentL0Method 196
# define _gtbrowseRefreshcurrentMethod 116
# define _gtbrowseRightL0Method 197
# define _gtbrowseRightMethod 117
# define _gtbrowseRightvisibL0Access 198
# define _gtbrowseRightvisibAccess 118
# define _gtbrowseRowMethod 119
# define _gtbrowseRowcacheL0Access 199
# define _gtbrowseRowcacheL0Assign 200
# define _gtbrowseRowcacheAccess 120
# define _gtbrowseRowcacheAssign 121
# define _gtbrowseRowcountL0Access 201
# define _gtbrowseRowcountAccess 122
# define _gtbrowseRowheightL0Access 202
# define _gtbrowseRowheightL0Assign 203
# define _gtbrowseRowheightAccess 123
# define _gtbrowseRowheightAssign 124
# define _gtbrowseRowposAccess 125
# define _gtbrowseRowposL0Assign 204
# define _gtbrowseRowposAssign 126
# define _gtbrowseScrollleftMethod 127
# define _gtbrowseScrollrightMethod 128
# define _gtbrowseSetcolumnL0Method 205
# define _gtbrowseSetcolumnMethod 129
# define _gtbrowseSetfocusMethod 130
# define _gtbrowseSetkeyMethod 131
# define _gtbrowseSetkeydefMethod 132
# define _gtbrowseSetselfptrMethod 206
# define _gtbrowseSetstyleMethod 133
# define _gtbrowseShowL0Method 207
# define _gtbrowseShowMethod 134
# define _gtbrowseSkipblockAccess 135
# define _gtbrowseSkipblockAssign 136
# define _gtbrowseStabilizeL0Method 208
# define _gtbrowseStabilizeMethod 137
# define _gtbrowseStableL0Access 209
# define _gtbrowseStableL0Assign 210
# define _gtbrowseStableAccess 138
# define _gtbrowseStableAssign 139
# define _gtbrowseTimeoutAccess 140
# define _gtbrowseTimeoutAssign 141
# define _gtbrowseTooltipAccess 142
# define _gtbrowseTooltipL0Assign 211
# define _gtbrowseTooltipAssign 143
# define _gtbrowseTrimAccess 144
# define _gtbrowseTrimAssign 145
# define _gtbrowseUpL0Method 212
# define _gtbrowseUpMethod 146
# define _gtbrowseVisibleAccess 147
# define _gtbrowseVscrollbarL0Assign 213
# define _gtbrowseVscrollbarAssign 148
# define _gtbrowse_cr_bg_colProtect 2
# define _gtbrowse_cr_bottomProtect 3
# define _gtbrowse_cr_fg_colProtect 4
# define _gtbrowse_cr_leftProtect 5
# define _gtbrowse_cr_rightProtect 6
# define _gtbrowse_cr_topProtect 7
# define _gtbrowse_fcolProtect 8
# define _gtbrowse_idInstance 154
# define _gtbrowse_iscreenProtect 9
# define _gtbrowse_n_olineProtect 10
# define _gtbrowse_n_stableProtect 11
# define _gtbrowse_noffsetProtect 12
# define _gtbrowse_var_ptrInstance 13
# define _gtbrowseAcolorspecProtect 14
# define _gtbrowseAhidesaveProtect 15
# define _gtbrowseAinitsaveProtect 16
# define _gtbrowseAofontspecProtect 17
# define _gtbrowseAotbcolumnProtect 18
# define _gtbrowseApfontinteProtect 19
# define _gtbrowseAsetkeyProtect 20
# define _gtbrowseAsetstyleProtect 21
# define _gtbrowseAutoliteInstance 22
# define _gtbrowseAutorefresInstance 23
# define _gtbrowseBdatachangProtect 24
# define _gtbrowseBgobottombProtect 25
# define _gtbrowseBgotopblocProtect 26
# define _gtbrowseBhandlerProtect 27
# define _gtbrowseBlockInstance 28
# define _gtbrowseBorderInstance 29
# define _gtbrowseBskipblockProtect 30
# define _gtbrowseCanappendInstance 31
# define _gtbrowseCandeleteInstance 32
# define _gtbrowseCaneditInstance 33
# define _gtbrowseCargoInstance 34
# define _gtbrowseCborderProtect 35
# define _gtbrowseCcolorspecProtect 36
# define _gtbrowseCcolsepProtect 37
# define _gtbrowseCdbaliasProtect 38
# define _gtbrowseCfootsepProtect 39
# define _gtbrowseCheadsepProtect 40
# define _gtbrowseCmessageProtect 41
# define _gtbrowseColadjustInstance 42
# define _gtbrowseColcountInstance 43
# define _gtbrowseColorspecInstance 44
# define _gtbrowseColposInstance 45
# define _gtbrowseColsepInstance 46
# define _gtbrowseColsepeofInstance 47
# define _gtbrowseCtooltipProtect 48
# define _gtbrowseDatachangeInstance 49
# define _gtbrowseDbaliasInstance 50
# define _gtbrowseDevwarningInstance 51
# define _gtbrowseDispldeletInstance 52
# define _gtbrowseDisplmessaInstance 53
# define _gtbrowseEnablemousInstance 54
# define _gtbrowseErrvalblocInstance 55
# define _gtbrowseExitstateInstance 56
# define _gtbrowseFootsepInstance 57
# define _gtbrowseFreezeInstance 58
# define _gtbrowseGetenabledInstance 59
# define _gtbrowseGetskipInstance 60
# define _gtbrowseGobottomblInstance 61
# define _gtbrowseGotopblockInstance 62
# define _gtbrowseGuialignInstance 63
# define _gtbrowseGuicappictInstance 64
# define _gtbrowseGuicaptionInstance 65
# define _gtbrowseGuicolInstance 66
# define _gtbrowseGuicolorspInstance 67
# define _gtbrowseGuifontspeInstance 68
# define _gtbrowseGuigridInstance 69
# define _gtbrowseHandlerInstance 70
# define _gtbrowseHeadsepInstance 71
# define _gtbrowseHitbottomInstance 72
# define _gtbrowseHittopInstance 73
# define _gtbrowseHscrollbarInstance 74
# define _gtbrowseIbottomProtect 75
# define _gtbrowseIcoladjustProtect 76
# define _gtbrowseIcolcountProtect 77
# define _gtbrowseIcolposProtect 78
# define _gtbrowseIdbfupdateProtect 79
# define _gtbrowseIfreezeProtect 80
# define _gtbrowseIleftProtect 81
# define _gtbrowseIleftvisibProtect 82
# define _gtbrowseIlinecursoProtect 83
# define _gtbrowseIncrsearchInstance 84
# define _gtbrowseIpageskipProtect 85
# define _gtbrowseIrightProtect 86
# define _gtbrowseIrightvisiProtect 87
# define _gtbrowseIrowcountProtect 88
# define _gtbrowseIrowposProtect 89
# define _gtbrowseIstablemodProtect 90
# define _gtbrowseItbridProtect 91
# define _gtbrowseItopProtect 92
# define _gtbrowseIusersProtect 93
# define _gtbrowseLbofProtect 94
# define _gtbrowseLcanappendProtect 95
# define _gtbrowseLcolsepeofProtect 96
# define _gtbrowseLdatachangProtect 97
# define _gtbrowseLeftvisiblInstance 98
# define _gtbrowseLeofProtect 99
# define _gtbrowseLguigridProtect 100
# define _gtbrowseLheadermulProtect 101
# define _gtbrowseLhitbottomProtect 102
# define _gtbrowseLhittopProtect 103
# define _gtbrowseLinecursorInstance 104
# define _gtbrowseLisvisibleProtect 105
# define _gtbrowseLmouseonProtect 106
# define _gtbrowseLreadonlyProtect 107
# define _gtbrowseLresizeablProtect 108
# define _gtbrowseLsetptrProtect 109
# define _gtbrowseLstableProtect 110
# define _gtbrowseLtrimProtect 111
# define _gtbrowseMcolposInstance 112
# define _gtbrowseMessageInstance 113
# define _gtbrowseMrowposInstance 114
# define _gtbrowseNameInstance 115
# define _gtbrowseNautoreflaProtect 116
# define _gtbrowseNautorefreProtect 117
# define _gtbrowseNbottomInstance 118
# define _gtbrowseNleftInstance 119
# define _gtbrowseNrightInstance 120
# define _gtbrowseNtimeoutProtect 121
# define _gtbrowseNtopInstance 122
# define _gtbrowseOdefcolorpProtect 123
# define _gtbrowseOhighcolorProtect 124
# define _gtbrowseOnclickactInstance 125
# define _gtbrowseOnclickkeyInstance 126
# define _gtbrowseOnupdateInstance 127
# define _gtbrowsePageskipInstance 128
# define _gtbrowsePostblockInstance 129
# define _gtbrowsePreblockInstance 130
# define _gtbrowseReaderInstance 131
# define _gtbrowseReadonlyInstance 132
# define _gtbrowseRightvisibInstance 133
# define _gtbrowseRowcacheInstance 134
# define _gtbrowseRowcountInstance 135
# define _gtbrowseRowheightInstance 136
# define _gtbrowseRowposInstance 137
# define _gtbrowseSelectedcoInstance 138
# define _gtbrowseSelectedreInstance 139
# define _gtbrowseSelectedroInstance 140
# define _gtbrowseSelectedvaInstance 141
# define _gtbrowseSkipblockInstance 142
# define _gtbrowseStableInstance 143
# define _gtbrowseSubscriptInstance 144
# define _gtbrowseTimeoutInstance 145
# define _gtbrowseTooltipInstance 146
# define _gtbrowseTrimInstance 147
# define _gtbrowseTypeoutInstance 148
# define _gtbrowseUpdatedInstance 149
# define _gtbrowseUserarrayInstance 150
# define _gtbrowseUserarraypInstance 151
# define _gtbrowseVisibleInstance 152
# define _gtbrowseVscrollbarInstance 153
# define _btbrowseAddcolumnMethod 0
# define _btbrowseApplykeyMethod 1
# define _btbrowseAutorefresAccess 2
# define _btbrowseAutorefresAssign 3
# define _btbrowseAutorefreshMethod 4
# define _btbrowseAxitMethod 5
# define _btbrowseBofMethod 6
# define _btbrowseBorderAccess 7
# define _btbrowseBorderAssign 8
# define _btbrowseClassnameMethod 9
# define _btbrowseColMethod 10
# define _btbrowseColadjustAccess 11
# define _btbrowseColadjustAssign 12
# define _btbrowseColcountAccess 13
# define _btbrowseColorrectMethod 14
# define _btbrowseColorspecAccess 15
# define _btbrowseColorspecAssign 16
# define _btbrowseColposAccess 17
# define _btbrowseColposAssign 18
# define _btbrowseColsepAccess 19
# define _btbrowseColsepAssign 20
# define _btbrowseColsepeofAccess 21
# define _btbrowseColsepeofAssign 22
# define _btbrowseColvisiblecoordMethod 23
# define _btbrowseColvisiblewidthMethod 24
# define _btbrowseColwidthMethod 25
# define _btbrowseConfigureMethod 26
# define _btbrowseDataMethod 27
# define _btbrowseDatachangeAccess 28
# define _btbrowseDatachangeAssign 29
# define _btbrowseDbaliasAccess 30
# define _btbrowseDehiliteMethod 31
# define _btbrowseDelcolumnMethod 32
# define _btbrowseDestroyMethod 33
# define _btbrowseDisplayMethod 34
# define _btbrowseDownMethod 35
# define _btbrowseEnablemousAccess 36
# define _btbrowseEnablemousAssign 37
# define _btbrowseEndMethod 38
# define _btbrowseEofMethod 39
# define _btbrowseExecMethod 40
# define _btbrowseFootsepAccess 41
# define _btbrowseFootsepAssign 42
# define _btbrowseForcestablMethod 43
# define _btbrowseForcestableMethod 44
# define _btbrowseFreezeAccess 45
# define _btbrowseFreezeAssign 46
# define _btbrowseGetcolumnMethod 47
# define _btbrowseGobottomMethod 48
# define _btbrowseGobottomblAccess 49
# define _btbrowseGobottomblAssign 50
# define _btbrowseGomouseposMethod 51
# define _btbrowseGotopMethod 52
# define _btbrowseGotopblockAccess 53
# define _btbrowseGotopblockAssign 54
# define _btbrowseGuicolorspAccess 55
# define _btbrowseGuicolorspAssign 56
# define _btbrowseGuifontspeAccess 57
# define _btbrowseGuifontspeAssign 58
# define _btbrowseGuigridAccess 59
# define _btbrowseGuigridAssign 60
# define _btbrowseGuiobj2varMethod 61
# define _btbrowseGuivar2objMethod 62
# define _btbrowseHandlerAccess 63
# define _btbrowseHandlerAssign 64
# define _btbrowseHeadsepAccess 65
# define _btbrowseHeadsepAssign 66
# define _btbrowseHeadstyleMethod 67
# define _btbrowseHideMethod 68
# define _btbrowseHiliteMethod 69
# define _btbrowseHitbottomAccess 70
# define _btbrowseHitbottomAssign 71
# define _btbrowseHittestMethod 72
# define _btbrowseHittopAccess 73
# define _btbrowseHittopAssign 74
# define _btbrowseHomeMethod 75
# define _btbrowseHscrollbarAssign 76
# define _btbrowseInitMethod 77
# define _btbrowseInscolumnMethod 78
# define _btbrowseInvalidateMethod 79
# define _btbrowseKillfocusMethod 80
# define _btbrowseLeftMethod 81
# define _btbrowseLeftvisiblAccess 82
# define _btbrowseLinecursorAccess 83
# define _btbrowseLinecursorAssign 84
# define _btbrowseMcolposAccess 85
# define _btbrowseMcolposAssign 86
# define _btbrowseMessageAccess 87
# define _btbrowseMessageAssign 88
# define _btbrowseMouseonMethod 89
# define _btbrowseMrowposAccess 90
# define _btbrowseMrowposAssign 91
# define _btbrowseNbottomAccess 92
# define _btbrowseNbottomAssign 93
# define _btbrowseNbottomMethod 94
# define _btbrowseNleftAccess 95
# define _btbrowseNleftAssign 96
# define _btbrowseNleftMethod 97
# define _btbrowseNrightAccess 98
# define _btbrowseNrightAssign 99
# define _btbrowseNrightMethod 100
# define _btbrowseNtopAccess 101
# define _btbrowseNtopAssign 102
# define _btbrowseNtopMethod 103
# define _btbrowsePagedownMethod 104
# define _btbrowsePageskipAccess 105
# define _btbrowsePageskipAssign 106
# define _btbrowsePageupMethod 107
# define _btbrowsePanendMethod 108
# define _btbrowsePanhomeMethod 109
# define _btbrowsePanleftMethod 110
# define _btbrowsePanrightMethod 111
# define _btbrowseReadonlyAccess 112
# define _btbrowseReadonlyAssign 113
# define _btbrowseRefreshallMethod 114
# define _btbrowseRefreshcurMethod 115
# define _btbrowseRefreshcurrentMethod 116
# define _btbrowseRightMethod 117
# define _btbrowseRightvisibAccess 118
# define _btbrowseRowMethod 119
# define _btbrowseRowcacheAccess 120
# define _btbrowseRowcacheAssign 121
# define _btbrowseRowcountAccess 122
# define _btbrowseRowheightAccess 123
# define _btbrowseRowheightAssign 124
# define _btbrowseRowposAccess 125
# define _btbrowseRowposAssign 126
# define _btbrowseScrollleftMethod 127
# define _btbrowseScrollrightMethod 128
# define _btbrowseSetcolumnMethod 129
# define _btbrowseSetfocusMethod 130
# define _btbrowseSetkeyMethod 131
# define _btbrowseSetkeydefMethod 132
# define _btbrowseSetstyleMethod 133
# define _btbrowseShowMethod 134
# define _btbrowseSkipblockAccess 135
# define _btbrowseSkipblockAssign 136
# define _btbrowseStabilizeMethod 137
# define _btbrowseStableAccess 138
# define _btbrowseStableAssign 139
# define _btbrowseTimeoutAccess 140
# define _btbrowseTimeoutAssign 141
# define _btbrowseTooltipAccess 142
# define _btbrowseTooltipAssign 143
# define _btbrowseTrimAccess 144
# define _btbrowseTrimAssign 145
# define _btbrowseUpMethod 146
# define _btbrowseVisibleAccess 147
# define _btbrowseVscrollbarAssign 148
# define _btbrowse_cr_bg_colProtect 2
# define _btbrowse_cr_bottomProtect 3
# define _btbrowse_cr_fg_colProtect 4
# define _btbrowse_cr_leftProtect 5
# define _btbrowse_cr_rightProtect 6
# define _btbrowse_cr_topProtect 7
# define _btbrowse_fcolProtect 8
# define _btbrowse_iscreenProtect 9
# define _btbrowse_n_olineProtect 10
# define _btbrowse_n_stableProtect 11
# define _btbrowse_noffsetProtect 12
# define _btbrowse_var_ptrInstance 13
# define _btbrowseAcolorspecProtect 14
# define _btbrowseAhidesaveProtect 15
# define _btbrowseAinitsaveProtect 16
# define _btbrowseAofontspecProtect 17
# define _btbrowseAotbcolumnProtect 18
# define _btbrowseApfontinteProtect 19
# define _btbrowseAsetkeyProtect 20
# define _btbrowseAsetstyleProtect 21
# define _btbrowseAutoliteInstance 22
# define _btbrowseAutorefresInstance 23
# define _btbrowseBdatachangProtect 24
# define _btbrowseBgobottombProtect 25
# define _btbrowseBgotopblocProtect 26
# define _btbrowseBhandlerProtect 27
# define _btbrowseBlockInstance 28
# define _btbrowseBorderInstance 29
# define _btbrowseBskipblockProtect 30
# define _btbrowseCanappendInstance 31
# define _btbrowseCandeleteInstance 32
# define _btbrowseCaneditInstance 33
# define _btbrowseCargoInstance 34
# define _btbrowseCborderProtect 35
# define _btbrowseCcolorspecProtect 36
# define _btbrowseCcolsepProtect 37
# define _btbrowseCdbaliasProtect 38
# define _btbrowseCfootsepProtect 39
# define _btbrowseCheadsepProtect 40
# define _btbrowseCmessageProtect 41
# define _btbrowseColadjustInstance 42
# define _btbrowseColcountInstance 43
# define _btbrowseColorspecInstance 44
# define _btbrowseColposInstance 45
# define _btbrowseColsepInstance 46
# define _btbrowseColsepeofInstance 47
# define _btbrowseCtooltipProtect 48
# define _btbrowseDatachangeInstance 49
# define _btbrowseDbaliasInstance 50
# define _btbrowseDevwarningInstance 51
# define _btbrowseDispldeletInstance 52
# define _btbrowseDisplmessaInstance 53
# define _btbrowseEnablemousInstance 54
# define _btbrowseErrvalblocInstance 55
# define _btbrowseExitstateInstance 56
# define _btbrowseFootsepInstance 57
# define _btbrowseFreezeInstance 58
# define _btbrowseGetenabledInstance 59
# define _btbrowseGetskipInstance 60
# define _btbrowseGobottomblInstance 61
# define _btbrowseGotopblockInstance 62
# define _btbrowseGuialignInstance 63
# define _btbrowseGuicappictInstance 64
# define _btbrowseGuicaptionInstance 65
# define _btbrowseGuicolInstance 66
# define _btbrowseGuicolorspInstance 67
# define _btbrowseGuifontspeInstance 68
# define _btbrowseGuigridInstance 69
# define _btbrowseHandlerInstance 70
# define _btbrowseHeadsepInstance 71
# define _btbrowseHitbottomInstance 72
# define _btbrowseHittopInstance 73
# define _btbrowseHscrollbarInstance 74
# define _btbrowseIbottomProtect 75
# define _btbrowseIcoladjustProtect 76
# define _btbrowseIcolcountProtect 77
# define _btbrowseIcolposProtect 78
# define _btbrowseIdbfupdateProtect 79
# define _btbrowseIfreezeProtect 80
# define _btbrowseIleftProtect 81
# define _btbrowseIleftvisibProtect 82
# define _btbrowseIlinecursoProtect 83
# define _btbrowseIncrsearchInstance 84
# define _btbrowseIpageskipProtect 85
# define _btbrowseIrightProtect 86
# define _btbrowseIrightvisiProtect 87
# define _btbrowseIrowcountProtect 88
# define _btbrowseIrowposProtect 89
# define _btbrowseIstablemodProtect 90
# define _btbrowseItbridProtect 91
# define _btbrowseItopProtect 92
# define _btbrowseIusersProtect 93
# define _btbrowseLbofProtect 94
# define _btbrowseLcanappendProtect 95
# define _btbrowseLcolsepeofProtect 96
# define _btbrowseLdatachangProtect 97
# define _btbrowseLeftvisiblInstance 98
# define _btbrowseLeofProtect 99
# define _btbrowseLguigridProtect 100
# define _btbrowseLheadermulProtect 101
# define _btbrowseLhitbottomProtect 102
# define _btbrowseLhittopProtect 103
# define _btbrowseLinecursorInstance 104
# define _btbrowseLisvisibleProtect 105
# define _btbrowseLmouseonProtect 106
# define _btbrowseLreadonlyProtect 107
# define _btbrowseLresizeablProtect 108
# define _btbrowseLsetptrProtect 109
# define _btbrowseLstableProtect 110
# define _btbrowseLtrimProtect 111
# define _btbrowseMcolposInstance 112
# define _btbrowseMessageInstance 113
# define _btbrowseMrowposInstance 114
# define _btbrowseNameInstance 115
# define _btbrowseNautoreflaProtect 116
# define _btbrowseNautorefreProtect 117
# define _btbrowseNbottomInstance 118
# define _btbrowseNleftInstance 119
# define _btbrowseNrightInstance 120
# define _btbrowseNtimeoutProtect 121
# define _btbrowseNtopInstance 122
# define _btbrowseOdefcolorpProtect 123
# define _btbrowseOhighcolorProtect 124
# define _btbrowseOnclickactInstance 125
# define _btbrowseOnclickkeyInstance 126
# define _btbrowseOnupdateInstance 127
# define _btbrowsePageskipInstance 128
# define _btbrowsePostblockInstance 129
# define _btbrowsePreblockInstance 130
# define _btbrowseReaderInstance 131
# define _btbrowseReadonlyInstance 132
# define _btbrowseRightvisibInstance 133
# define _btbrowseRowcacheInstance 134
# define _btbrowseRowcountInstance 135
# define _btbrowseRowheightInstance 136
# define _btbrowseRowposInstance 137
# define _btbrowseSelectedcoInstance 138
# define _btbrowseSelectedreInstance 139
# define _btbrowseSelectedroInstance 140
# define _btbrowseSelectedvaInstance 141
# define _btbrowseSkipblockInstance 142
# define _btbrowseStableInstance 143
# define _btbrowseSubscriptInstance 144
# define _btbrowseTimeoutInstance 145
# define _btbrowseTooltipInstance 146
# define _btbrowseTrimInstance 147
# define _btbrowseTypeoutInstance 148
# define _btbrowseUpdatedInstance 149
# define _btbrowseUserarrayInstance 150
# define _btbrowseUserarraypInstance 151
# define _btbrowseVisibleInstance 152
# define _btbrowseVscrollbarInstance 153
extern FSvar *_bb__ttbrowse_addcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_colorrect_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_colwidth_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_configure_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_dehilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_delcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_down_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_forcestabl_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_forcestable_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_getcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_gobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_gotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_hide_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_hilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_hittest_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_inscolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_invalidate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_mouseon_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_pagedown_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_pageup_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_panend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_panhome_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_panleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_panright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_refreshall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_refreshcur_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_refreshcurrent_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_rowcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__ttbrowse_setcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_show_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_stabilize_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__ttbrowse_up_me FGS_ANSI((FSint, FSvar *[]));
# define _ttbrowseAddcolumnL0Method 149
# define _ttbrowseAddcolumnMethod 0
# define _ttbrowseApplykeyMethod 1
# define _ttbrowseAutorefresAccess 2
# define _ttbrowseAutorefresAssign 3
# define _ttbrowseAutorefreshMethod 4
# define _ttbrowseAxitMethod 5
# define _ttbrowseBofMethod 6
# define _ttbrowseBorderAccess 7
# define _ttbrowseBorderAssign 8
# define _ttbrowseClassnameMethod 9
# define _ttbrowseColMethod 10
# define _ttbrowseColadjustAccess 11
# define _ttbrowseColadjustAssign 12
# define _ttbrowseColcountAccess 13
# define _ttbrowseColorrectL0Method 150
# define _ttbrowseColorrectMethod 14
# define _ttbrowseColorspecAccess 15
# define _ttbrowseColorspecAssign 16
# define _ttbrowseColposAccess 17
# define _ttbrowseColposAssign 18
# define _ttbrowseColsepAccess 19
# define _ttbrowseColsepAssign 20
# define _ttbrowseColsepeofAccess 21
# define _ttbrowseColsepeofAssign 22
# define _ttbrowseColvisiblecoordMethod 23
# define _ttbrowseColvisiblewidthMethod 24
# define _ttbrowseColwidthL0Method 151
# define _ttbrowseColwidthMethod 25
# define _ttbrowseConfigureL0Method 152
# define _ttbrowseConfigureMethod 26
# define _ttbrowseDataMethod 27
# define _ttbrowseDatachangeAccess 28
# define _ttbrowseDatachangeAssign 29
# define _ttbrowseDbaliasAccess 30
# define _ttbrowseDehiliteL0Method 153
# define _ttbrowseDehiliteMethod 31
# define _ttbrowseDelcolumnL0Method 154
# define _ttbrowseDelcolumnMethod 32
# define _ttbrowseDestroyMethod 33
# define _ttbrowseDisplayMethod 34
# define _ttbrowseDownL0Method 155
# define _ttbrowseDownMethod 35
# define _ttbrowseEnablemousAccess 36
# define _ttbrowseEnablemousAssign 37
# define _ttbrowseEndL0Method 156
# define _ttbrowseEndMethod 38
# define _ttbrowseEofMethod 39
# define _ttbrowseExecMethod 40
# define _ttbrowseFootsepAccess 41
# define _ttbrowseFootsepAssign 42
# define _ttbrowseForcestablL0Method 157
# define _ttbrowseForcestablMethod 43
# define _ttbrowseForcestableL0Method 158
# define _ttbrowseForcestableMethod 44
# define _ttbrowseFreezeAccess 45
# define _ttbrowseFreezeAssign 46
# define _ttbrowseGetcolumnL0Method 159
# define _ttbrowseGetcolumnMethod 47
# define _ttbrowseGobottomL0Method 160
# define _ttbrowseGobottomMethod 48
# define _ttbrowseGobottomblAccess 49
# define _ttbrowseGobottomblAssign 50
# define _ttbrowseGomouseposMethod 51
# define _ttbrowseGotopL0Method 161
# define _ttbrowseGotopMethod 52
# define _ttbrowseGotopblockAccess 53
# define _ttbrowseGotopblockAssign 54
# define _ttbrowseGuicolorspAccess 55
# define _ttbrowseGuicolorspAssign 56
# define _ttbrowseGuifontspeAccess 57
# define _ttbrowseGuifontspeAssign 58
# define _ttbrowseGuigridAccess 59
# define _ttbrowseGuigridAssign 60
# define _ttbrowseGuiobj2varMethod 61
# define _ttbrowseGuivar2objMethod 62
# define _ttbrowseHandlerAccess 63
# define _ttbrowseHandlerAssign 64
# define _ttbrowseHeadsepAccess 65
# define _ttbrowseHeadsepAssign 66
# define _ttbrowseHeadstyleMethod 67
# define _ttbrowseHideL0Method 162
# define _ttbrowseHideMethod 68
# define _ttbrowseHiliteL0Method 163
# define _ttbrowseHiliteMethod 69
# define _ttbrowseHitbottomAccess 70
# define _ttbrowseHitbottomAssign 71
# define _ttbrowseHittestL0Method 164
# define _ttbrowseHittestMethod 72
# define _ttbrowseHittopAccess 73
# define _ttbrowseHittopAssign 74
# define _ttbrowseHomeL0Method 165
# define _ttbrowseHomeMethod 75
# define _ttbrowseHscrollbarAssign 76
# define _ttbrowseInitL0Method 166
# define _ttbrowseInitMethod 77
# define _ttbrowseInscolumnL0Method 167
# define _ttbrowseInscolumnMethod 78
# define _ttbrowseInvalidateL0Method 168
# define _ttbrowseInvalidateMethod 79
# define _ttbrowseKillfocusMethod 80
# define _ttbrowseLeftL0Method 169
# define _ttbrowseLeftMethod 81
# define _ttbrowseLeftvisiblAccess 82
# define _ttbrowseLinecursorAccess 83
# define _ttbrowseLinecursorAssign 84
# define _ttbrowseMcolposAccess 85
# define _ttbrowseMcolposAssign 86
# define _ttbrowseMessageAccess 87
# define _ttbrowseMessageAssign 88
# define _ttbrowseMouseonL0Method 170
# define _ttbrowseMouseonMethod 89
# define _ttbrowseMrowposAccess 90
# define _ttbrowseMrowposAssign 91
# define _ttbrowseNbottomAccess 92
# define _ttbrowseNbottomAssign 93
# define _ttbrowseNbottomMethod 94
# define _ttbrowseNleftAccess 95
# define _ttbrowseNleftAssign 96
# define _ttbrowseNleftMethod 97
# define _ttbrowseNrightAccess 98
# define _ttbrowseNrightAssign 99
# define _ttbrowseNrightMethod 100
# define _ttbrowseNtopAccess 101
# define _ttbrowseNtopAssign 102
# define _ttbrowseNtopMethod 103
# define _ttbrowsePagedownL0Method 171
# define _ttbrowsePagedownMethod 104
# define _ttbrowsePageskipAccess 105
# define _ttbrowsePageskipAssign 106
# define _ttbrowsePageupL0Method 172
# define _ttbrowsePageupMethod 107
# define _ttbrowsePanendL0Method 173
# define _ttbrowsePanendMethod 108
# define _ttbrowsePanhomeL0Method 174
# define _ttbrowsePanhomeMethod 109
# define _ttbrowsePanleftL0Method 175
# define _ttbrowsePanleftMethod 110
# define _ttbrowsePanrightL0Method 176
# define _ttbrowsePanrightMethod 111
# define _ttbrowseReadonlyAccess 112
# define _ttbrowseReadonlyAssign 113
# define _ttbrowseRefreshallL0Method 177
# define _ttbrowseRefreshallMethod 114
# define _ttbrowseRefreshcurL0Method 178
# define _ttbrowseRefreshcurMethod 115
# define _ttbrowseRefreshcurrentL0Method 179
# define _ttbrowseRefreshcurrentMethod 116
# define _ttbrowseRightL0Method 180
# define _ttbrowseRightMethod 117
# define _ttbrowseRightvisibAccess 118
# define _ttbrowseRowMethod 119
# define _ttbrowseRowcacheAccess 120
# define _ttbrowseRowcacheAssign 121
# define _ttbrowseRowcountL0Access 181
# define _ttbrowseRowcountAccess 122
# define _ttbrowseRowheightAccess 123
# define _ttbrowseRowheightAssign 124
# define _ttbrowseRowposAccess 125
# define _ttbrowseRowposAssign 126
# define _ttbrowseScrollleftMethod 127
# define _ttbrowseScrollrightMethod 128
# define _ttbrowseSetcolumnL0Method 182
# define _ttbrowseSetcolumnMethod 129
# define _ttbrowseSetfocusMethod 130
# define _ttbrowseSetkeyMethod 131
# define _ttbrowseSetkeydefMethod 132
# define _ttbrowseSetstyleMethod 133
# define _ttbrowseShowL0Method 183
# define _ttbrowseShowMethod 134
# define _ttbrowseSkipblockAccess 135
# define _ttbrowseSkipblockAssign 136
# define _ttbrowseStabilizeL0Method 184
# define _ttbrowseStabilizeMethod 137
# define _ttbrowseStableAccess 138
# define _ttbrowseStableAssign 139
# define _ttbrowseTimeoutAccess 140
# define _ttbrowseTimeoutAssign 141
# define _ttbrowseTooltipAccess 142
# define _ttbrowseTooltipAssign 143
# define _ttbrowseTrimAccess 144
# define _ttbrowseTrimAssign 145
# define _ttbrowseUpL0Method 185
# define _ttbrowseUpMethod 146
# define _ttbrowseVisibleAccess 147
# define _ttbrowseVscrollbarAssign 148
# define _ttbrowse_cr_bg_colProtect 2
# define _ttbrowse_cr_bottomProtect 3
# define _ttbrowse_cr_fg_colProtect 4
# define _ttbrowse_cr_leftProtect 5
# define _ttbrowse_cr_rightProtect 6
# define _ttbrowse_cr_topProtect 7
# define _ttbrowse_fcolProtect 8
# define _ttbrowse_iscreenProtect 9
# define _ttbrowse_n_olineProtect 10
# define _ttbrowse_n_stableProtect 11
# define _ttbrowse_noffsetProtect 12
# define _ttbrowse_var_ptrInstance 13
# define _ttbrowseAcolorspecProtect 14
# define _ttbrowseAhidesaveProtect 15
# define _ttbrowseAinitsaveProtect 16
# define _ttbrowseAofontspecProtect 17
# define _ttbrowseAotbcolumnProtect 18
# define _ttbrowseApfontinteProtect 19
# define _ttbrowseAsetkeyProtect 20
# define _ttbrowseAsetstyleProtect 21
# define _ttbrowseAutoliteInstance 22
# define _ttbrowseAutorefresInstance 23
# define _ttbrowseBdatachangProtect 24
# define _ttbrowseBgobottombProtect 25
# define _ttbrowseBgotopblocProtect 26
# define _ttbrowseBhandlerProtect 27
# define _ttbrowseBlockInstance 28
# define _ttbrowseBorderInstance 29
# define _ttbrowseBskipblockProtect 30
# define _ttbrowseCanappendInstance 31
# define _ttbrowseCandeleteInstance 32
# define _ttbrowseCaneditInstance 33
# define _ttbrowseCargoInstance 34
# define _ttbrowseCborderProtect 35
# define _ttbrowseCcolorspecProtect 36
# define _ttbrowseCcolsepProtect 37
# define _ttbrowseCdbaliasProtect 38
# define _ttbrowseCfootsepProtect 39
# define _ttbrowseCheadsepProtect 40
# define _ttbrowseCmessageProtect 41
# define _ttbrowseColadjustInstance 42
# define _ttbrowseColcountInstance 43
# define _ttbrowseColorspecInstance 44
# define _ttbrowseColposInstance 45
# define _ttbrowseColsepInstance 46
# define _ttbrowseColsepeofInstance 47
# define _ttbrowseCtooltipProtect 48
# define _ttbrowseDatachangeInstance 49
# define _ttbrowseDbaliasInstance 50
# define _ttbrowseDevwarningInstance 51
# define _ttbrowseDispldeletInstance 52
# define _ttbrowseDisplmessaInstance 53
# define _ttbrowseEnablemousInstance 54
# define _ttbrowseErrvalblocInstance 55
# define _ttbrowseExitstateInstance 56
# define _ttbrowseFootsepInstance 57
# define _ttbrowseFreezeInstance 58
# define _ttbrowseGetenabledInstance 59
# define _ttbrowseGetskipInstance 60
# define _ttbrowseGobottomblInstance 61
# define _ttbrowseGotopblockInstance 62
# define _ttbrowseGuialignInstance 63
# define _ttbrowseGuicappictInstance 64
# define _ttbrowseGuicaptionInstance 65
# define _ttbrowseGuicolInstance 66
# define _ttbrowseGuicolorspInstance 67
# define _ttbrowseGuifontspeInstance 68
# define _ttbrowseGuigridInstance 69
# define _ttbrowseHandlerInstance 70
# define _ttbrowseHeadsepInstance 71
# define _ttbrowseHitbottomInstance 72
# define _ttbrowseHittopInstance 73
# define _ttbrowseHscrollbarInstance 74
# define _ttbrowseIbottomProtect 75
# define _ttbrowseIcoladjustProtect 76
# define _ttbrowseIcolcountProtect 77
# define _ttbrowseIcolposProtect 78
# define _ttbrowseIdbfupdateProtect 79
# define _ttbrowseIfreezeProtect 80
# define _ttbrowseIleftProtect 81
# define _ttbrowseIleftvisibProtect 82
# define _ttbrowseIlinecursoProtect 83
# define _ttbrowseIncrsearchInstance 84
# define _ttbrowseIpageskipProtect 85
# define _ttbrowseIrightProtect 86
# define _ttbrowseIrightvisiProtect 87
# define _ttbrowseIrowcountProtect 88
# define _ttbrowseIrowposProtect 89
# define _ttbrowseIstablemodProtect 90
# define _ttbrowseItbridProtect 91
# define _ttbrowseItopProtect 92
# define _ttbrowseIusersProtect 93
# define _ttbrowseLbofProtect 94
# define _ttbrowseLcanappendProtect 95
# define _ttbrowseLcolsepeofProtect 96
# define _ttbrowseLdatachangProtect 97
# define _ttbrowseLeftvisiblInstance 98
# define _ttbrowseLeofProtect 99
# define _ttbrowseLguigridProtect 100
# define _ttbrowseLheadermulProtect 101
# define _ttbrowseLhitbottomProtect 102
# define _ttbrowseLhittopProtect 103
# define _ttbrowseLinecursorInstance 104
# define _ttbrowseLisvisibleProtect 105
# define _ttbrowseLmouseonProtect 106
# define _ttbrowseLreadonlyProtect 107
# define _ttbrowseLresizeablProtect 108
# define _ttbrowseLsetptrProtect 109
# define _ttbrowseLstableProtect 110
# define _ttbrowseLtrimProtect 111
# define _ttbrowseMcolposInstance 112
# define _ttbrowseMessageInstance 113
# define _ttbrowseMrowposInstance 114
# define _ttbrowseNameInstance 115
# define _ttbrowseNautoreflaProtect 116
# define _ttbrowseNautorefreProtect 117
# define _ttbrowseNbottomInstance 118
# define _ttbrowseNleftInstance 119
# define _ttbrowseNrightInstance 120
# define _ttbrowseNtimeoutProtect 121
# define _ttbrowseNtopInstance 122
# define _ttbrowseOdefcolorpProtect 123
# define _ttbrowseOhighcolorProtect 124
# define _ttbrowseOnclickactInstance 125
# define _ttbrowseOnclickkeyInstance 126
# define _ttbrowseOnupdateInstance 127
# define _ttbrowsePageskipInstance 128
# define _ttbrowsePostblockInstance 129
# define _ttbrowsePreblockInstance 130
# define _ttbrowseReaderInstance 131
# define _ttbrowseReadonlyInstance 132
# define _ttbrowseRightvisibInstance 133
# define _ttbrowseRowcacheInstance 134
# define _ttbrowseRowcountInstance 135
# define _ttbrowseRowheightInstance 136
# define _ttbrowseRowposInstance 137
# define _ttbrowseSelectedcoInstance 138
# define _ttbrowseSelectedreInstance 139
# define _ttbrowseSelectedroInstance 140
# define _ttbrowseSelectedvaInstance 141
# define _ttbrowseSkipblockInstance 142
# define _ttbrowseStableInstance 143
# define _ttbrowseSubscriptInstance 144
# define _ttbrowseTimeoutInstance 145
# define _ttbrowseTooltipInstance 146
# define _ttbrowseTrimInstance 147
# define _ttbrowseTypeoutInstance 148
# define _ttbrowseUpdatedInstance 149
# define _ttbrowseUserarrayInstance 150
# define _ttbrowseUserarraypInstance 151
# define _ttbrowseVisibleInstance 152
# define _ttbrowseVscrollbarInstance 153
extern FSvar *_bb__tbcolumn__colpos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbcolumn_alignment_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_alignment_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbcolumn_block_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_block_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_colorblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_colorblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_colpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_colsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_colsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_data_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_data_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_datadeci_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_datasize_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_datatype_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_defcolor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_defcolor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_footcolor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_footcolor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_footing_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_footing_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_footsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_footsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_guicolorbl_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_guicolorbl_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_guidefcolo_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_guidefcolo_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_guifontblo_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_guifontblo_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_headcolor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_headcolor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_heading_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_heading_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_headsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_headsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbcolumn_memopos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_memopos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_parent_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbcolumn_parent_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_picture_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_picture_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_postblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_postblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_preblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_preblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_readonly_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_readonly_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_setptrex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbcolumn_setstyle_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__tbcolumn_width_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_width_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_widthpixel_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_widthpixel_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_widthvisib_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__tbcolumn_widthvisib_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__tbcolumn_widthvisible_me FGS_ANSI((FSint, FSvar *[]));
# define _tbcolumn_colposMethod 0
# define _tbcolumnAlignmentAccess 1
# define _tbcolumnAlignmentAssign 2
# define _tbcolumnAxitMethod 3
# define _tbcolumnBlockAccess 4
# define _tbcolumnBlockAssign 5
# define _tbcolumnColorblockAccess 6
# define _tbcolumnColorblockAssign 7
# define _tbcolumnColposAccess 8
# define _tbcolumnColsepAccess 9
# define _tbcolumnColsepAssign 10
# define _tbcolumnDataAccess 11
# define _tbcolumnDataAssign 12
# define _tbcolumnDatadeciAccess 13
# define _tbcolumnDatasizeAccess 14
# define _tbcolumnDatatypeAccess 15
# define _tbcolumnDefcolorAccess 16
# define _tbcolumnDefcolorAssign 17
# define _tbcolumnFootcolorAccess 18
# define _tbcolumnFootcolorAssign 19
# define _tbcolumnFootingAccess 20
# define _tbcolumnFootingAssign 21
# define _tbcolumnFootsepAccess 22
# define _tbcolumnFootsepAssign 23
# define _tbcolumnGuicolorblAccess 24
# define _tbcolumnGuicolorblAssign 25
# define _tbcolumnGuidefcoloAccess 26
# define _tbcolumnGuidefcoloAssign 27
# define _tbcolumnGuifontbloAccess 28
# define _tbcolumnGuifontbloAssign 29
# define _tbcolumnHeadcolorAccess 30
# define _tbcolumnHeadcolorAssign 31
# define _tbcolumnHeadingAccess 32
# define _tbcolumnHeadingAssign 33
# define _tbcolumnHeadsepAccess 34
# define _tbcolumnHeadsepAssign 35
# define _tbcolumnInitMethod 36
# define _tbcolumnMemoposAccess 37
# define _tbcolumnMemoposAssign 38
# define _tbcolumnParentMethod 39
# define _tbcolumnParentAccess 40
# define _tbcolumnPictureAccess 41
# define _tbcolumnPictureAssign 42
# define _tbcolumnPostblockAccess 43
# define _tbcolumnPostblockAssign 44
# define _tbcolumnPreblockAccess 45
# define _tbcolumnPreblockAssign 46
# define _tbcolumnReadonlyAccess 47
# define _tbcolumnReadonlyAssign 48
# define _tbcolumnSetptrexMethod 49
# define _tbcolumnSetstyleMethod 50
# define _tbcolumnWidthAccess 51
# define _tbcolumnWidthAssign 52
# define _tbcolumnWidthpixelAccess 53
# define _tbcolumnWidthpixelAssign 54
# define _tbcolumnWidthvisibAccess 55
# define _tbcolumnWidthvisibAssign 56
# define _tbcolumnWidthvisibleMethod 57
# define _tbcolumnAdefcolorProtect 2
# define _tbcolumnAguidefcolProtect 3
# define _tbcolumnAlignmentInstance 4
# define _tbcolumnBblockProtect 5
# define _tbcolumnBcolorblocProtect 6
# define _tbcolumnBguicolorbProtect 7
# define _tbcolumnBguifontblProtect 8
# define _tbcolumnBlockInstance 9
# define _tbcolumnBpostblockProtect 10
# define _tbcolumnBpreblockProtect 11
# define _tbcolumnCargoInstance 12
# define _tbcolumnCcolsepProtect 13
# define _tbcolumnCdefcolorProtect 14
# define _tbcolumnCfootcolorProtect 15
# define _tbcolumnCfootingProtect 16
# define _tbcolumnCfootsepProtect 17
# define _tbcolumnCheadcolorProtect 18
# define _tbcolumnCheadingProtect 19
# define _tbcolumnCheadsepProtect 20
# define _tbcolumnColorblockInstance 21
# define _tbcolumnColposInstance 22
# define _tbcolumnColsepInstance 23
# define _tbcolumnCpictureProtect 24
# define _tbcolumnDataInstance 25
# define _tbcolumnDatadeciInstance 26
# define _tbcolumnDatasizeInstance 27
# define _tbcolumnDatatypeInstance 28
# define _tbcolumnDefcolorInstance 29
# define _tbcolumnDevwarningInstance 30
# define _tbcolumnFootcolorInstance 31
# define _tbcolumnFootingInstance 32
# define _tbcolumnFootsepInstance 33
# define _tbcolumnGuicolorblInstance 34
# define _tbcolumnGuidefcoloInstance 35
# define _tbcolumnGuifontbloInstance 36
# define _tbcolumnHeadcolorInstance 37
# define _tbcolumnHeadingInstance 38
# define _tbcolumnHeadsepInstance 39
# define _tbcolumnIalignmentProtect 40
# define _tbcolumnIcolposProtect 41
# define _tbcolumnIwidthcharProtect 42
# define _tbcolumnIwidthpixeProtect 43
# define _tbcolumnLmultilineInstance 44
# define _tbcolumnLreadonlyProtect 45
# define _tbcolumnLsetptrProtect 46
# define _tbcolumnMemoposInstance 47
# define _tbcolumnOmemoposProtect 48
# define _tbcolumnOparentProtect 49
# define _tbcolumnParentInstance 50
# define _tbcolumnPictureInstance 51
# define _tbcolumnPostblockInstance 52
# define _tbcolumnPreblockInstance 53
# define _tbcolumnReadonlyInstance 54
# define _tbcolumnSinternalProtect 55
# define _tbcolumnWidthInstance 56
# define _tbcolumnWidthpixelInstance 57
# define _tbcolumnWidthvisibInstance 58
extern FSvar *_bb__btbcolumn_init_me FGS_ANSI((FSint, FSvar *[]));
# define _btbcolumn_colposMethod 0
# define _btbcolumnAlignmentAccess 1
# define _btbcolumnAlignmentAssign 2
# define _btbcolumnAxitMethod 3
# define _btbcolumnBlockAccess 4
# define _btbcolumnBlockAssign 5
# define _btbcolumnColorblockAccess 6
# define _btbcolumnColorblockAssign 7
# define _btbcolumnColposAccess 8
# define _btbcolumnColsepAccess 9
# define _btbcolumnColsepAssign 10
# define _btbcolumnDataAccess 11
# define _btbcolumnDataAssign 12
# define _btbcolumnDatadeciAccess 13
# define _btbcolumnDatasizeAccess 14
# define _btbcolumnDatatypeAccess 15
# define _btbcolumnDefcolorAccess 16
# define _btbcolumnDefcolorAssign 17
# define _btbcolumnFootcolorAccess 18
# define _btbcolumnFootcolorAssign 19
# define _btbcolumnFootingAccess 20
# define _btbcolumnFootingAssign 21
# define _btbcolumnFootsepAccess 22
# define _btbcolumnFootsepAssign 23
# define _btbcolumnGuicolorblAccess 24
# define _btbcolumnGuicolorblAssign 25
# define _btbcolumnGuidefcoloAccess 26
# define _btbcolumnGuidefcoloAssign 27
# define _btbcolumnGuifontbloAccess 28
# define _btbcolumnGuifontbloAssign 29
# define _btbcolumnHeadcolorAccess 30
# define _btbcolumnHeadcolorAssign 31
# define _btbcolumnHeadingAccess 32
# define _btbcolumnHeadingAssign 33
# define _btbcolumnHeadsepAccess 34
# define _btbcolumnHeadsepAssign 35
# define _btbcolumnInitL0Method 58
# define _btbcolumnInitMethod 36
# define _btbcolumnMemoposAccess 37
# define _btbcolumnMemoposAssign 38
# define _btbcolumnParentMethod 39
# define _btbcolumnParentAccess 40
# define _btbcolumnPictureAccess 41
# define _btbcolumnPictureAssign 42
# define _btbcolumnPostblockAccess 43
# define _btbcolumnPostblockAssign 44
# define _btbcolumnPreblockAccess 45
# define _btbcolumnPreblockAssign 46
# define _btbcolumnReadonlyAccess 47
# define _btbcolumnReadonlyAssign 48
# define _btbcolumnSetptrexMethod 49
# define _btbcolumnSetstyleMethod 50
# define _btbcolumnWidthAccess 51
# define _btbcolumnWidthAssign 52
# define _btbcolumnWidthpixelAccess 53
# define _btbcolumnWidthpixelAssign 54
# define _btbcolumnWidthvisibAccess 55
# define _btbcolumnWidthvisibAssign 56
# define _btbcolumnWidthvisibleMethod 57
# define _btbcolumnAdefcolorProtect 2
# define _btbcolumnAguidefcolProtect 3
# define _btbcolumnAlignmentInstance 4
# define _btbcolumnBblockProtect 5
# define _btbcolumnBcolorblocProtect 6
# define _btbcolumnBguicolorbProtect 7
# define _btbcolumnBguifontblProtect 8
# define _btbcolumnBlockInstance 9
# define _btbcolumnBpostblockProtect 10
# define _btbcolumnBpreblockProtect 11
# define _btbcolumnCargoInstance 12
# define _btbcolumnCcolsepProtect 13
# define _btbcolumnCdefcolorProtect 14
# define _btbcolumnCfootcolorProtect 15
# define _btbcolumnCfootingProtect 16
# define _btbcolumnCfootsepProtect 17
# define _btbcolumnCheadcolorProtect 18
# define _btbcolumnCheadingProtect 19
# define _btbcolumnCheadsepProtect 20
# define _btbcolumnColorblockInstance 21
# define _btbcolumnColposInstance 22
# define _btbcolumnColsepInstance 23
# define _btbcolumnCpictureProtect 24
# define _btbcolumnDataInstance 25
# define _btbcolumnDatadeciInstance 26
# define _btbcolumnDatasizeInstance 27
# define _btbcolumnDatatypeInstance 28
# define _btbcolumnDefcolorInstance 29
# define _btbcolumnDevwarningInstance 30
# define _btbcolumnFootcolorInstance 31
# define _btbcolumnFootingInstance 32
# define _btbcolumnFootsepInstance 33
# define _btbcolumnGuicolorblInstance 34
# define _btbcolumnGuidefcoloInstance 35
# define _btbcolumnGuifontbloInstance 36
# define _btbcolumnHeadcolorInstance 37
# define _btbcolumnHeadingInstance 38
# define _btbcolumnHeadsepInstance 39
# define _btbcolumnIalignmentProtect 40
# define _btbcolumnIcolposProtect 41
# define _btbcolumnIwidthcharProtect 42
# define _btbcolumnIwidthpixeProtect 43
# define _btbcolumnLmultilineInstance 44
# define _btbcolumnLreadonlyProtect 45
# define _btbcolumnLsetptrProtect 46
# define _btbcolumnMemoposInstance 47
# define _btbcolumnOmemoposProtect 48
# define _btbcolumnOparentProtect 49
# define _btbcolumnParentInstance 50
# define _btbcolumnPictureInstance 51
# define _btbcolumnPostblockInstance 52
# define _btbcolumnPreblockInstance 53
# define _btbcolumnReadonlyInstance 54
# define _btbcolumnSinternalProtect 55
# define _btbcolumnWidthInstance 56
# define _btbcolumnWidthpixelInstance 57
# define _btbcolumnWidthvisibInstance 58
extern FSvar *_bb__ttbcolumn_init_me FGS_ANSI((FSint, FSvar *[]));
# define _ttbcolumn_colposMethod 0
# define _ttbcolumnAlignmentAccess 1
# define _ttbcolumnAlignmentAssign 2
# define _ttbcolumnAxitMethod 3
# define _ttbcolumnBlockAccess 4
# define _ttbcolumnBlockAssign 5
# define _ttbcolumnColorblockAccess 6
# define _ttbcolumnColorblockAssign 7
# define _ttbcolumnColposAccess 8
# define _ttbcolumnColsepAccess 9
# define _ttbcolumnColsepAssign 10
# define _ttbcolumnDataAccess 11
# define _ttbcolumnDataAssign 12
# define _ttbcolumnDatadeciAccess 13
# define _ttbcolumnDatasizeAccess 14
# define _ttbcolumnDatatypeAccess 15
# define _ttbcolumnDefcolorAccess 16
# define _ttbcolumnDefcolorAssign 17
# define _ttbcolumnFootcolorAccess 18
# define _ttbcolumnFootcolorAssign 19
# define _ttbcolumnFootingAccess 20
# define _ttbcolumnFootingAssign 21
# define _ttbcolumnFootsepAccess 22
# define _ttbcolumnFootsepAssign 23
# define _ttbcolumnGuicolorblAccess 24
# define _ttbcolumnGuicolorblAssign 25
# define _ttbcolumnGuidefcoloAccess 26
# define _ttbcolumnGuidefcoloAssign 27
# define _ttbcolumnGuifontbloAccess 28
# define _ttbcolumnGuifontbloAssign 29
# define _ttbcolumnHeadcolorAccess 30
# define _ttbcolumnHeadcolorAssign 31
# define _ttbcolumnHeadingAccess 32
# define _ttbcolumnHeadingAssign 33
# define _ttbcolumnHeadsepAccess 34
# define _ttbcolumnHeadsepAssign 35
# define _ttbcolumnInitL0Method 58
# define _ttbcolumnInitMethod 36
# define _ttbcolumnMemoposAccess 37
# define _ttbcolumnMemoposAssign 38
# define _ttbcolumnParentMethod 39
# define _ttbcolumnParentAccess 40
# define _ttbcolumnPictureAccess 41
# define _ttbcolumnPictureAssign 42
# define _ttbcolumnPostblockAccess 43
# define _ttbcolumnPostblockAssign 44
# define _ttbcolumnPreblockAccess 45
# define _ttbcolumnPreblockAssign 46
# define _ttbcolumnReadonlyAccess 47
# define _ttbcolumnReadonlyAssign 48
# define _ttbcolumnSetptrexMethod 49
# define _ttbcolumnSetstyleMethod 50
# define _ttbcolumnWidthAccess 51
# define _ttbcolumnWidthAssign 52
# define _ttbcolumnWidthpixelAccess 53
# define _ttbcolumnWidthpixelAssign 54
# define _ttbcolumnWidthvisibAccess 55
# define _ttbcolumnWidthvisibAssign 56
# define _ttbcolumnWidthvisibleMethod 57
# define _ttbcolumnAdefcolorProtect 2
# define _ttbcolumnAguidefcolProtect 3
# define _ttbcolumnAlignmentInstance 4
# define _ttbcolumnBblockProtect 5
# define _ttbcolumnBcolorblocProtect 6
# define _ttbcolumnBguicolorbProtect 7
# define _ttbcolumnBguifontblProtect 8
# define _ttbcolumnBlockInstance 9
# define _ttbcolumnBpostblockProtect 10
# define _ttbcolumnBpreblockProtect 11
# define _ttbcolumnCargoInstance 12
# define _ttbcolumnCcolsepProtect 13
# define _ttbcolumnCdefcolorProtect 14
# define _ttbcolumnCfootcolorProtect 15
# define _ttbcolumnCfootingProtect 16
# define _ttbcolumnCfootsepProtect 17
# define _ttbcolumnCheadcolorProtect 18
# define _ttbcolumnCheadingProtect 19
# define _ttbcolumnCheadsepProtect 20
# define _ttbcolumnColorblockInstance 21
# define _ttbcolumnColposInstance 22
# define _ttbcolumnColsepInstance 23
# define _ttbcolumnCpictureProtect 24
# define _ttbcolumnDataInstance 25
# define _ttbcolumnDatadeciInstance 26
# define _ttbcolumnDatasizeInstance 27
# define _ttbcolumnDatatypeInstance 28
# define _ttbcolumnDefcolorInstance 29
# define _ttbcolumnDevwarningInstance 30
# define _ttbcolumnFootcolorInstance 31
# define _ttbcolumnFootingInstance 32
# define _ttbcolumnFootsepInstance 33
# define _ttbcolumnGuicolorblInstance 34
# define _ttbcolumnGuidefcoloInstance 35
# define _ttbcolumnGuifontbloInstance 36
# define _ttbcolumnHeadcolorInstance 37
# define _ttbcolumnHeadingInstance 38
# define _ttbcolumnHeadsepInstance 39
# define _ttbcolumnIalignmentProtect 40
# define _ttbcolumnIcolposProtect 41
# define _ttbcolumnIwidthcharProtect 42
# define _ttbcolumnIwidthpixeProtect 43
# define _ttbcolumnLmultilineInstance 44
# define _ttbcolumnLreadonlyProtect 45
# define _ttbcolumnLsetptrProtect 46
# define _ttbcolumnMemoposInstance 47
# define _ttbcolumnOmemoposProtect 48
# define _ttbcolumnOparentProtect 49
# define _ttbcolumnParentInstance 50
# define _ttbcolumnPictureInstance 51
# define _ttbcolumnPostblockInstance 52
# define _ttbcolumnPreblockInstance 53
# define _ttbcolumnReadonlyInstance 54
# define _ttbcolumnSinternalProtect 55
# define _ttbcolumnWidthInstance 56
# define _ttbcolumnWidthpixelInstance 57
# define _ttbcolumnWidthvisibInstance 58
extern FSvar *_bb__gtbcolumn_alignment_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbcolumn_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbcolumn_defcolor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbcolumn_defcolor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbcolumn_heading_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbcolumn_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbcolumn_initex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbcolumn_setptrex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbcolumn_setselfptr_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__gtbcolumn_width_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbcolumn_width_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbcolumn_widthpixel_ac FGS_ANSI((FSvar *));
extern FSvar *_bb__gtbcolumn_widthpixel_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb__gtbcolumn_widthvisible_me FGS_ANSI((FSint, FSvar *[]));
# define _gtbcolumn_colposMethod 0
# define _gtbcolumnAlignmentAccess 1
# define _gtbcolumnAlignmentL0Assign 58
# define _gtbcolumnAlignmentAssign 2
# define _gtbcolumnAxitL0Method 59
# define _gtbcolumnAxitMethod 3
# define _gtbcolumnBlockAccess 4
# define _gtbcolumnBlockAssign 5
# define _gtbcolumnColorblockAccess 6
# define _gtbcolumnColorblockAssign 7
# define _gtbcolumnColposAccess 8
# define _gtbcolumnColsepAccess 9
# define _gtbcolumnColsepAssign 10
# define _gtbcolumnDataAccess 11
# define _gtbcolumnDataAssign 12
# define _gtbcolumnDatadeciAccess 13
# define _gtbcolumnDatasizeAccess 14
# define _gtbcolumnDatatypeAccess 15
# define _gtbcolumnDefcolorL0Access 60
# define _gtbcolumnDefcolorL0Assign 61
# define _gtbcolumnDefcolorAccess 16
# define _gtbcolumnDefcolorAssign 17
# define _gtbcolumnFootcolorAccess 18
# define _gtbcolumnFootcolorAssign 19
# define _gtbcolumnFootingAccess 20
# define _gtbcolumnFootingAssign 21
# define _gtbcolumnFootsepAccess 22
# define _gtbcolumnFootsepAssign 23
# define _gtbcolumnGuicolorblAccess 24
# define _gtbcolumnGuicolorblAssign 25
# define _gtbcolumnGuidefcoloAccess 26
# define _gtbcolumnGuidefcoloAssign 27
# define _gtbcolumnGuifontbloAccess 28
# define _gtbcolumnGuifontbloAssign 29
# define _gtbcolumnHeadcolorAccess 30
# define _gtbcolumnHeadcolorAssign 31
# define _gtbcolumnHeadingAccess 32
# define _gtbcolumnHeadingL0Assign 62
# define _gtbcolumnHeadingAssign 33
# define _gtbcolumnHeadsepAccess 34
# define _gtbcolumnHeadsepAssign 35
# define _gtbcolumnInitL0Method 63
# define _gtbcolumnInitMethod 36
# define _gtbcolumnInitexMethod 64
# define _gtbcolumnMemoposAccess 37
# define _gtbcolumnMemoposAssign 38
# define _gtbcolumnParentMethod 39
# define _gtbcolumnParentAccess 40
# define _gtbcolumnPictureAccess 41
# define _gtbcolumnPictureAssign 42
# define _gtbcolumnPostblockAccess 43
# define _gtbcolumnPostblockAssign 44
# define _gtbcolumnPreblockAccess 45
# define _gtbcolumnPreblockAssign 46
# define _gtbcolumnReadonlyAccess 47
# define _gtbcolumnReadonlyAssign 48
# define _gtbcolumnSetptrexL0Method 65
# define _gtbcolumnSetptrexMethod 49
# define _gtbcolumnSetselfptrMethod 66
# define _gtbcolumnSetstyleMethod 50
# define _gtbcolumnWidthL0Access 67
# define _gtbcolumnWidthL0Assign 68
# define _gtbcolumnWidthAccess 51
# define _gtbcolumnWidthAssign 52
# define _gtbcolumnWidthpixelL0Access 69
# define _gtbcolumnWidthpixelL0Assign 70
# define _gtbcolumnWidthpixelAccess 53
# define _gtbcolumnWidthpixelAssign 54
# define _gtbcolumnWidthvisibAccess 55
# define _gtbcolumnWidthvisibAssign 56
# define _gtbcolumnWidthvisibleL0Method 71
# define _gtbcolumnWidthvisibleMethod 57
# define _gtbcolumnAdefcolorProtect 2
# define _gtbcolumnAguidefcolProtect 3
# define _gtbcolumnAlignmentInstance 4
# define _gtbcolumnBblockProtect 5
# define _gtbcolumnBcolorblocProtect 6
# define _gtbcolumnBguicolorbProtect 7
# define _gtbcolumnBguifontblProtect 8
# define _gtbcolumnBlockInstance 9
# define _gtbcolumnBpostblockProtect 10
# define _gtbcolumnBpreblockProtect 11
# define _gtbcolumnCargoInstance 12
# define _gtbcolumnCcolsepProtect 13
# define _gtbcolumnCdefcolorProtect 14
# define _gtbcolumnCfootcolorProtect 15
# define _gtbcolumnCfootingProtect 16
# define _gtbcolumnCfootsepProtect 17
# define _gtbcolumnCheadcolorProtect 18
# define _gtbcolumnCheadingProtect 19
# define _gtbcolumnCheadsepProtect 20
# define _gtbcolumnColorblockInstance 21
# define _gtbcolumnColposInstance 22
# define _gtbcolumnColsepInstance 23
# define _gtbcolumnCpictureProtect 24
# define _gtbcolumnDataInstance 25
# define _gtbcolumnDatadeciInstance 26
# define _gtbcolumnDatasizeInstance 27
# define _gtbcolumnDatatypeInstance 28
# define _gtbcolumnDefcolorInstance 29
# define _gtbcolumnDevwarningInstance 30
# define _gtbcolumnFootcolorInstance 31
# define _gtbcolumnFootingInstance 32
# define _gtbcolumnFootsepInstance 33
# define _gtbcolumnGuicolorblInstance 34
# define _gtbcolumnGuidefcoloInstance 35
# define _gtbcolumnGuifontbloInstance 36
# define _gtbcolumnHeadcolorInstance 37
# define _gtbcolumnHeadingInstance 38
# define _gtbcolumnHeadsepInstance 39
# define _gtbcolumnIalignmentProtect 40
# define _gtbcolumnIcolposProtect 41
# define _gtbcolumnIwidthcharProtect 42
# define _gtbcolumnIwidthpixeProtect 43
# define _gtbcolumnLmultilineInstance 44
# define _gtbcolumnLreadonlyProtect 45
# define _gtbcolumnLsetptrProtect 46
# define _gtbcolumnMemoposInstance 47
# define _gtbcolumnOmemoposProtect 48
# define _gtbcolumnOparentProtect 49
# define _gtbcolumnParentInstance 50
# define _gtbcolumnPictureInstance 51
# define _gtbcolumnPostblockInstance 52
# define _gtbcolumnPreblockInstance 53
# define _gtbcolumnReadonlyInstance 54
# define _gtbcolumnSinternalProtect 55
# define _gtbcolumnWidthInstance 56
# define _gtbcolumnWidthpixelInstance 57
# define _gtbcolumnWidthvisibInstance 58
extern FSvar *_bb_aadd FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_aeval FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_atail FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_chr FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_col FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbappend FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbcloseall FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbcreate FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbgotop FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbselectar FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbskip FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbusearea FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_deleted FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_devout FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_devpos FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_empty FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_eof FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_fclose FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_fcreate FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_ferror FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_fwrite FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_if FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_inkey FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_isobjprope FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_lastkey FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_lastrec FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_len FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_readkill FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_readmodal FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_readsave FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_recno FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_row FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_scroll FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_set FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_setpos FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_space FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_str FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_upper FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_used FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_valtype FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__fsget_ FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb__stdunitpi FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb___keyboard FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb___quit FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_abort_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_alias_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_alias_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_aliassym_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_append_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_appenddb_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_appenddelimited_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_appendsdf_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_asstring_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_average_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobdirectexport_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobdirectget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobdirectimport_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobdirectput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobexport_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobimport_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobrootget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobrootlock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobrootput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blobrootunlock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blockdone_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_blockeval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_bof_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_clearfilter_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_clearindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_clearlocate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_clearrelation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_clearscope_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_close_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_commit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_concurrenc_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_concurrenc_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_continue_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_copydb_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_copydelimited_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_copysdf_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_copystructure_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_count_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_createdb_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_createindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_createorder_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_datafield_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_dbstruct_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_delete_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_deleteall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_deleted_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_deleteorder_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_driver_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_eof_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_errinfo_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_error_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_eval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_fieldget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldgetformatted_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldhyperlabel_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldname_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldpos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldspec_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldstatus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldsym_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_fieldvalidate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_filespec_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_filter_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_filter_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_flock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_forblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_forblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_found_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_getarray_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_getarrfields_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_getlocate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_getlookuptable_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_gobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_goto_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_gotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_header_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_indexcheck_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_indexcheck_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_indexcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_indexext_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_indexkey_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_indexkey_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_indexlock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_indexord_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_info_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_isrelation_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_isrelation_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_join_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_lastrec_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_locate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_lockcurrentrecord_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_lockselection_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_lupdate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_name_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_noivarget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_noivarput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_nomethod_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_notify_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderbotto_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_orderbotto_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_orderdescend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderisunique_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderkeyadd_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderkeycount_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderkeydel_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderkeygoto_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderkeyno_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_orderkeyno_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_orderkeyno_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderkeyva_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_orderscope_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_orderskipunique_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_ordertopsc_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_ordertopsc_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_pack_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_rddinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_rddname_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_readonly_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_recall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_recallall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_reccount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_recno_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_recno_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_recordinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_recsize_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_refresh_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_registerclient_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_reindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_relation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_relationobject_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_replace_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_resetnotification_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_rlock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_rlocklist_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_rlockverify_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_rollback_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_scope_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_scope_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_seek_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_seekeval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setdatafield_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setfilter_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setfound_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_setindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setlocate_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_setorder_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setordercondition_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setrelation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_setselectiverelat_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_shared_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_skip_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_sort_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_status_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_sum_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_suspendnotification_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_task_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_total_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_unlock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_unregisterclient_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_update_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_used_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_usersdbf_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dataserver_whileblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dataserver_whileblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dataserver_zap_me FGS_ANSI((FSint, FSvar *[]));
# define DataserverAbortMethod 0
# define DataserverAliasAccess 1
# define DataserverAliasAssign 2
# define DataserverAliassymAccess 3
# define DataserverAppendMethod 4
# define DataserverAppenddbMethod 5
# define DataserverAppenddelimitedMethod 6
# define DataserverAppendsdfMethod 7
# define DataserverAsstringMethod 8
# define DataserverAverageMethod 9
# define DataserverBlobdirectexportMethod 10
# define DataserverBlobdirectgetMethod 11
# define DataserverBlobdirectimportMethod 12
# define DataserverBlobdirectputMethod 13
# define DataserverBlobexportMethod 14
# define DataserverBlobgetMethod 15
# define DataserverBlobimportMethod 16
# define DataserverBlobrootgetMethod 17
# define DataserverBlobrootlockMethod 18
# define DataserverBlobrootputMethod 19
# define DataserverBlobrootunlockMethod 20
# define DataserverBlockdoneMethod 21
# define DataserverBlockevalMethod 22
# define DataserverBofAccess 23
# define DataserverClearfilterMethod 24
# define DataserverClearindexMethod 25
# define DataserverClearlocateMethod 26
# define DataserverClearrelationMethod 27
# define DataserverClearscopeMethod 28
# define DataserverCloseMethod 29
# define DataserverCommitMethod 30
# define DataserverConcurrencAccess 31
# define DataserverConcurrencAssign 32
# define DataserverContinueMethod 33
# define DataserverCopydbMethod 34
# define DataserverCopydelimitedMethod 35
# define DataserverCopysdfMethod 36
# define DataserverCopystructureMethod 37
# define DataserverCountMethod 38
# define DataserverCreatedbMethod 39
# define DataserverCreateindexMethod 40
# define DataserverCreateorderMethod 41
# define DataserverDatafieldMethod 42
# define DataserverDbstructMethod 43
# define DataserverDeleteMethod 44
# define DataserverDeleteallMethod 45
# define DataserverDeletedAccess 46
# define DataserverDeleteorderMethod 47
# define DataserverDriverAccess 48
# define DataserverEofAccess 49
# define DataserverErrinfoAccess 50
# define DataserverErrorMethod 51
# define DataserverEvalMethod 52
# define DataserverFcountAccess 53
# define DataserverFieldgetMethod 54
# define DataserverFieldgetformattedMethod 55
# define DataserverFieldhyperlabelMethod 56
# define DataserverFieldinfoMethod 57
# define DataserverFieldnameMethod 58
# define DataserverFieldposMethod 59
# define DataserverFieldputMethod 60
# define DataserverFieldspecMethod 61
# define DataserverFieldstatusMethod 62
# define DataserverFieldsymMethod 63
# define DataserverFieldvalidateMethod 64
# define DataserverFilespecAccess 65
# define DataserverFilterAccess 66
# define DataserverFilterAssign 67
# define DataserverFlockMethod 68
# define DataserverForblockAccess 69
# define DataserverForblockAssign 70
# define DataserverFoundAccess 71
# define DataserverGetarrayMethod 72
# define DataserverGetarrfieldsMethod 73
# define DataserverGetlocateAccess 74
# define DataserverGetlookuptableMethod 75
# define DataserverGobottomMethod 76
# define DataserverGotoMethod 77
# define DataserverGotopMethod 78
# define DataserverHeaderAccess 79
# define DataserverIndexcheckMethod 80
# define DataserverIndexcheckAccess 81
# define DataserverIndexcountAccess 82
# define DataserverIndexextAccess 83
# define DataserverIndexkeyMethod 84
# define DataserverIndexkeyAccess 85
# define DataserverIndexlockAccess 86
# define DataserverIndexordMethod 87
# define DataserverInfoMethod 88
# define DataserverInitMethod 89
# define DataserverIsrelationAccess 90
# define DataserverIsrelationAssign 91
# define DataserverJoinMethod 92
# define DataserverLastrecAccess 93
# define DataserverLocateMethod 94
# define DataserverLockcurrentrecordMethod 95
# define DataserverLockselectionMethod 96
# define DataserverLupdateAccess 97
# define DataserverNameAccess 98
# define DataserverNoivargetMethod 99
# define DataserverNoivarputMethod 100
# define DataserverNomethodMethod 101
# define DataserverNotifyMethod 102
# define DataserverOrderbottoAccess 103
# define DataserverOrderbottoAssign 104
# define DataserverOrderdescendMethod 105
# define DataserverOrderinfoMethod 106
# define DataserverOrderisuniqueMethod 107
# define DataserverOrderkeyaddMethod 108
# define DataserverOrderkeycountMethod 109
# define DataserverOrderkeydelMethod 110
# define DataserverOrderkeygotoMethod 111
# define DataserverOrderkeynoAccess 112
# define DataserverOrderkeynoAssign 113
# define DataserverOrderkeynoMethod 114
# define DataserverOrderkeyvaAccess 115
# define DataserverOrderscopeMethod 116
# define DataserverOrderskipuniqueMethod 117
# define DataserverOrdertopscAccess 118
# define DataserverOrdertopscAssign 119
# define DataserverPackMethod 120
# define DataserverRddinfoMethod 121
# define DataserverRddnameAccess 122
# define DataserverReadonlyAccess 123
# define DataserverRecallMethod 124
# define DataserverRecallallMethod 125
# define DataserverReccountAccess 126
# define DataserverRecnoAccess 127
# define DataserverRecnoAssign 128
# define DataserverRecordinfoMethod 129
# define DataserverRecsizeAccess 130
# define DataserverRefreshMethod 131
# define DataserverRegisterclientMethod 132
# define DataserverReindexMethod 133
# define DataserverRelationMethod 134
# define DataserverRelationobjectMethod 135
# define DataserverReplaceMethod 136
# define DataserverResetnotificationMethod 137
# define DataserverRlockMethod 138
# define DataserverRlocklistAccess 139
# define DataserverRlockverifyMethod 140
# define DataserverRollbackMethod 141
# define DataserverScopeAccess 142
# define DataserverScopeAssign 143
# define DataserverSeekMethod 144
# define DataserverSeekevalMethod 145
# define DataserverSetdatafieldMethod 146
# define DataserverSetfilterMethod 147
# define DataserverSetfoundAssign 148
# define DataserverSetindexMethod 149
# define DataserverSetlocateAssign 150
# define DataserverSetorderMethod 151
# define DataserverSetorderconditionMethod 152
# define DataserverSetrelationMethod 153
# define DataserverSetselectiverelatMethod 154
# define DataserverSharedAccess 155
# define DataserverSkipMethod 156
# define DataserverSortMethod 157
# define DataserverStatusAccess 158
# define DataserverSumMethod 159
# define DataserverSuspendnotificationMethod 160
# define DataserverTaskMethod 161
# define DataserverTotalMethod 162
# define DataserverUnlockMethod 163
# define DataserverUnregisterclientMethod 164
# define DataserverUpdateMethod 165
# define DataserverUsedAccess 166
# define DataserverUsersdbfMethod 167
# define DataserverWhileblockAccess 168
# define DataserverWhileblockAssign 169
# define DataserverZapMethod 170
# define DataserverAliasInstance 2
# define DataserverAliassymInstance 3
# define DataserverBofInstance 4
# define DataserverCargoInstance 5
# define DataserverConcurrencInstance 6
# define DataserverDeletedInstance 7
# define DataserverDriverInstance 8
# define DataserverEofInstance 9
# define DataserverErrinfoInstance 10
# define DataserverFcountInstance 11
# define DataserverFilespecInstance 12
# define DataserverFilterInstance 13
# define DataserverForblockInstance 14
# define DataserverFoundInstance 15
# define DataserverGetlocateInstance 16
# define DataserverHeaderInstance 17
# define DataserverIndexcheckInstance 18
# define DataserverIndexcountInstance 19
# define DataserverIndexextInstance 20
# define DataserverIndexkeyInstance 21
# define DataserverIndexlockInstance 22
# define DataserverIsrelationInstance 23
# define DataserverLastrecInstance 24
# define DataserverLupdateInstance 25
# define DataserverNameInstance 26
# define DataserverOrderbottoInstance 27
# define DataserverOrderkeynoInstance 28
# define DataserverOrderkeyvaInstance 29
# define DataserverOrdertopscInstance 30
# define DataserverRddnameInstance 31
# define DataserverReadonlyInstance 32
# define DataserverReccountInstance 33
# define DataserverRecnoInstance 34
# define DataserverRecsizeInstance 35
# define DataserverRlocklistInstance 36
# define DataserverScopeInstance 37
# define DataserverSetfoundInstance 38
# define DataserverSetlocateInstance 39
# define DataserverSharedInstance 40
# define DataserverStatusInstance 41
# define DataserverUsedInstance 42
# define DataserverWhileblockInstance 43
extern FSvar *_bb_dbfidx_abort_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_alias_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_alias_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_aliassym_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_append_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_appenddb_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_appenddelimited_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_appendsdf_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_asstring_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_average_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_axit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_blockdone_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_blockeval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_blockstart_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_bof_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_clearfilter_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_clearindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_clearlocate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_clearrelation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_clearscope_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_close_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_commit_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_concurrenc_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_concurrenc_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_continue_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_copydb_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_copydelimited_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_copysdf_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_copystructure_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_count_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_createdb_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_createindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_createorder_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_dbstruct_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_delete_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_deleteall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_deleted_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_deleteorder_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_driver_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_eof_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_errinfo_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_errinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_error_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_eval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_fcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_fieldget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_fieldinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_fieldname_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_fieldpos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_fieldput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_filespec_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_filter_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_filter_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_flock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_forblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_forblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_found_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_getarray_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_getarrfields_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_getlocate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_getlookuptable_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_gobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_goto_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_gotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_header_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_ignorefilter_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_ignorerelation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexappend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexcheck_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_indexcheck_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_indexext_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_indexgobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexgotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexkey_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexkey_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_indexkeycompare_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexlock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_indexord_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexreplace_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexseek_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexseekeval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexskip_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_indexsynchronize_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_info_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_isrelation_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_isrelation_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_join_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_lastrec_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_locate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_lockcurrentrecord_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_lupdate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_name_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_noivarget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_noivarput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_orderbotto_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_orderinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_orderisunique_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_orderkeycount_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_orderkeyno_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_orderkeyno_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_orderkeyva_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_ordertopsc_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_pack_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_procname_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_quickfieldget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_quickfieldput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_rddinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_rddname_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_readonly_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_recall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_recallall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_reccount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_recno_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_recno_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_recordinfo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_recsize_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_refresh_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_reindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_relation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_relationobject_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_replace_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_rlock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_rlocklist_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_rlockverify_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_scope_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_scope_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_seek_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_seekeval_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_setfilter_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_setfound_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_setindex_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_setlocate_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_setorder_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_setordercondition_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_setrelation_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_shared_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_skip_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_sort_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_status_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_sum_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_task_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_total_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_unlock_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_update_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_used_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_usersdbf_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfidx_whileblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_dbfidx_whileblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_dbfidx_zap_me FGS_ANSI((FSint, FSvar *[]));
# define DbfidxAbortL0Method 171
# define DbfidxAbortMethod 0
# define DbfidxAliasL0Access 172
# define DbfidxAliasL0Assign 173
# define DbfidxAliasAccess 1
# define DbfidxAliasAssign 2
# define DbfidxAliassymL0Access 174
# define DbfidxAliassymAccess 3
# define DbfidxAppendL0Method 175
# define DbfidxAppendMethod 4
# define DbfidxAppenddbL0Method 176
# define DbfidxAppenddbMethod 5
# define DbfidxAppenddelimitedL0Method 177
# define DbfidxAppenddelimitedMethod 6
# define DbfidxAppendsdfL0Method 178
# define DbfidxAppendsdfMethod 7
# define DbfidxAsstringL0Method 179
# define DbfidxAsstringMethod 8
# define DbfidxAverageL0Method 180
# define DbfidxAverageMethod 9
# define DbfidxAxitMethod 181
# define DbfidxBlobdirectexportMethod 10
# define DbfidxBlobdirectgetMethod 11
# define DbfidxBlobdirectimportMethod 12
# define DbfidxBlobdirectputMethod 13
# define DbfidxBlobexportMethod 14
# define DbfidxBlobgetMethod 15
# define DbfidxBlobimportMethod 16
# define DbfidxBlobrootgetMethod 17
# define DbfidxBlobrootlockMethod 18
# define DbfidxBlobrootputMethod 19
# define DbfidxBlobrootunlockMethod 20
# define DbfidxBlockdoneL0Method 182
# define DbfidxBlockdoneMethod 21
# define DbfidxBlockevalL0Method 183
# define DbfidxBlockevalMethod 22
# define DbfidxBlockstartMethod 184
# define DbfidxBofL0Access 185
# define DbfidxBofAccess 23
# define DbfidxClearfilterL0Method 186
# define DbfidxClearfilterMethod 24
# define DbfidxClearindexL0Method 187
# define DbfidxClearindexMethod 25
# define DbfidxClearlocateL0Method 188
# define DbfidxClearlocateMethod 26
# define DbfidxClearrelationL0Method 189
# define DbfidxClearrelationMethod 27
# define DbfidxClearscopeL0Method 190
# define DbfidxClearscopeMethod 28
# define DbfidxCloseL0Method 191
# define DbfidxCloseMethod 29
# define DbfidxCommitL0Method 192
# define DbfidxCommitMethod 30
# define DbfidxConcurrencL0Access 193
# define DbfidxConcurrencL0Assign 194
# define DbfidxConcurrencAccess 31
# define DbfidxConcurrencAssign 32
# define DbfidxContinueL0Method 195
# define DbfidxContinueMethod 33
# define DbfidxCopydbL0Method 196
# define DbfidxCopydbMethod 34
# define DbfidxCopydelimitedL0Method 197
# define DbfidxCopydelimitedMethod 35
# define DbfidxCopysdfL0Method 198
# define DbfidxCopysdfMethod 36
# define DbfidxCopystructureL0Method 199
# define DbfidxCopystructureMethod 37
# define DbfidxCountL0Method 200
# define DbfidxCountMethod 38
# define DbfidxCreatedbL0Method 201
# define DbfidxCreatedbMethod 39
# define DbfidxCreateindexL0Method 202
# define DbfidxCreateindexMethod 40
# define DbfidxCreateorderL0Method 203
# define DbfidxCreateorderMethod 41
# define DbfidxDatafieldMethod 42
# define DbfidxDbstructL0Method 204
# define DbfidxDbstructMethod 43
# define DbfidxDeleteL0Method 205
# define DbfidxDeleteMethod 44
# define DbfidxDeleteallL0Method 206
# define DbfidxDeleteallMethod 45
# define DbfidxDeletedL0Access 207
# define DbfidxDeletedAccess 46
# define DbfidxDeleteorderL0Method 208
# define DbfidxDeleteorderMethod 47
# define DbfidxDriverL0Access 209
# define DbfidxDriverAccess 48
# define DbfidxEofL0Access 210
# define DbfidxEofAccess 49
# define DbfidxErrinfoL0Access 211
# define DbfidxErrinfoAccess 50
# define DbfidxErrinfoMethod 212
# define DbfidxErrorL0Method 213
# define DbfidxErrorMethod 51
# define DbfidxEvalL0Method 214
# define DbfidxEvalMethod 52
# define DbfidxFcountL0Access 215
# define DbfidxFcountAccess 53
# define DbfidxFieldgetL0Method 216
# define DbfidxFieldgetMethod 54
# define DbfidxFieldgetformattedMethod 55
# define DbfidxFieldhyperlabelMethod 56
# define DbfidxFieldinfoL0Method 217
# define DbfidxFieldinfoMethod 57
# define DbfidxFieldnameL0Method 218
# define DbfidxFieldnameMethod 58
# define DbfidxFieldposL0Method 219
# define DbfidxFieldposMethod 59
# define DbfidxFieldputL0Method 220
# define DbfidxFieldputMethod 60
# define DbfidxFieldspecMethod 61
# define DbfidxFieldstatusMethod 62
# define DbfidxFieldsymMethod 63
# define DbfidxFieldvalidateMethod 64
# define DbfidxFilespecL0Access 221
# define DbfidxFilespecAccess 65
# define DbfidxFilterL0Access 222
# define DbfidxFilterL0Assign 223
# define DbfidxFilterAccess 66
# define DbfidxFilterAssign 67
# define DbfidxFlockL0Method 224
# define DbfidxFlockMethod 68
# define DbfidxForblockL0Access 225
# define DbfidxForblockL0Assign 226
# define DbfidxForblockAccess 69
# define DbfidxForblockAssign 70
# define DbfidxFoundL0Access 227
# define DbfidxFoundAccess 71
# define DbfidxGetarrayL0Method 228
# define DbfidxGetarrayMethod 72
# define DbfidxGetarrfieldsL0Method 229
# define DbfidxGetarrfieldsMethod 73
# define DbfidxGetlocateL0Access 230
# define DbfidxGetlocateAccess 74
# define DbfidxGetlookuptableL0Method 231
# define DbfidxGetlookuptableMethod 75
# define DbfidxGobottomL0Method 232
# define DbfidxGobottomMethod 76
# define DbfidxGotoL0Method 233
# define DbfidxGotoMethod 77
# define DbfidxGotopL0Method 234
# define DbfidxGotopMethod 78
# define DbfidxHeaderL0Access 235
# define DbfidxHeaderAccess 79
# define DbfidxIgnorefilterMethod 236
# define DbfidxIgnorerelationMethod 237
# define DbfidxIndexappendMethod 238
# define DbfidxIndexcheckL0Method 240
# define DbfidxIndexcheckL0Access 239
# define DbfidxIndexcheckAccess 81
# define DbfidxIndexcheckMethod 80
# define DbfidxIndexcountL0Access 241
# define DbfidxIndexcountAccess 82
# define DbfidxIndexextL0Access 242
# define DbfidxIndexextAccess 83
# define DbfidxIndexgobottomMethod 243
# define DbfidxIndexgotopMethod 244
# define DbfidxIndexkeyL0Method 245
# define DbfidxIndexkeyL0Access 246
# define DbfidxIndexkeyMethod 84
# define DbfidxIndexkeyAccess 85
# define DbfidxIndexkeycompareMethod 247
# define DbfidxIndexlockL0Access 248
# define DbfidxIndexlockAccess 86
# define DbfidxIndexordL0Method 249
# define DbfidxIndexordMethod 87
# define DbfidxIndexreplaceMethod 250
# define DbfidxIndexseekMethod 251
# define DbfidxIndexseekevalMethod 252
# define DbfidxIndexskipMethod 253
# define DbfidxIndexsynchronizeMethod 254
# define DbfidxInfoL0Method 255
# define DbfidxInfoMethod 88
# define DbfidxInitL0Method 256
# define DbfidxInitMethod 89
# define DbfidxIsrelationL0Access 257
# define DbfidxIsrelationL0Assign 258
# define DbfidxIsrelationAccess 90
# define DbfidxIsrelationAssign 91
# define DbfidxJoinL0Method 259
# define DbfidxJoinMethod 92
# define DbfidxLastrecL0Access 260
# define DbfidxLastrecAccess 93
# define DbfidxLocateL0Method 261
# define DbfidxLocateMethod 94
# define DbfidxLockcurrentrecordL0Method 262
# define DbfidxLockcurrentrecordMethod 95
# define DbfidxLockselectionMethod 96
# define DbfidxLupdateL0Access 263
# define DbfidxLupdateAccess 97
# define DbfidxNameL0Access 264
# define DbfidxNameAccess 98
# define DbfidxNoivargetL0Method 265
# define DbfidxNoivargetMethod 99
# define DbfidxNoivarputL0Method 266
# define DbfidxNoivarputMethod 100
# define DbfidxNomethodMethod 101
# define DbfidxNotifyMethod 102
# define DbfidxOrderbottoL0Access 267
# define DbfidxOrderbottoAssign 104
# define DbfidxOrderbottoAccess 103
# define DbfidxOrderdescendMethod 105
# define DbfidxOrderinfoL0Method 268
# define DbfidxOrderinfoMethod 106
# define DbfidxOrderisuniqueL0Method 269
# define DbfidxOrderisuniqueMethod 107
# define DbfidxOrderkeyaddMethod 108
# define DbfidxOrderkeycountL0Method 270
# define DbfidxOrderkeycountMethod 109
# define DbfidxOrderkeydelMethod 110
# define DbfidxOrderkeygotoMethod 111
# define DbfidxOrderkeynoL0Access 272
# define DbfidxOrderkeynoAssign 113
# define DbfidxOrderkeynoL0Method 271
# define DbfidxOrderkeynoMethod 114
# define DbfidxOrderkeynoAccess 112
# define DbfidxOrderkeyvaL0Access 273
# define DbfidxOrderkeyvaAccess 115
# define DbfidxOrderscopeMethod 116
# define DbfidxOrderskipuniqueMethod 117
# define DbfidxOrdertopscL0Access 274
# define DbfidxOrdertopscAssign 119
# define DbfidxOrdertopscAccess 118
# define DbfidxPackL0Method 275
# define DbfidxPackMethod 120
# define DbfidxProcnameMethod 276
# define DbfidxQuickfieldgetMethod 277
# define DbfidxQuickfieldputMethod 278
# define DbfidxRddinfoL0Method 279
# define DbfidxRddinfoMethod 121
# define DbfidxRddnameL0Access 280
# define DbfidxRddnameAccess 122
# define DbfidxReadonlyL0Access 281
# define DbfidxReadonlyAccess 123
# define DbfidxRecallL0Method 282
# define DbfidxRecallMethod 124
# define DbfidxRecallallL0Method 283
# define DbfidxRecallallMethod 125
# define DbfidxReccountL0Access 284
# define DbfidxReccountAccess 126
# define DbfidxRecnoL0Access 285
# define DbfidxRecnoL0Assign 286
# define DbfidxRecnoAccess 127
# define DbfidxRecnoAssign 128
# define DbfidxRecordinfoL0Method 287
# define DbfidxRecordinfoMethod 129
# define DbfidxRecsizeL0Access 288
# define DbfidxRecsizeAccess 130
# define DbfidxRefreshL0Method 289
# define DbfidxRefreshMethod 131
# define DbfidxRegisterclientMethod 132
# define DbfidxReindexL0Method 290
# define DbfidxReindexMethod 133
# define DbfidxRelationL0Method 291
# define DbfidxRelationMethod 134
# define DbfidxRelationobjectL0Method 292
# define DbfidxRelationobjectMethod 135
# define DbfidxReplaceL0Method 293
# define DbfidxReplaceMethod 136
# define DbfidxResetnotificationMethod 137
# define DbfidxRlockL0Method 294
# define DbfidxRlockMethod 138
# define DbfidxRlocklistL0Access 295
# define DbfidxRlocklistAccess 139
# define DbfidxRlockverifyL0Method 296
# define DbfidxRlockverifyMethod 140
# define DbfidxRollbackMethod 141
# define DbfidxScopeL0Access 297
# define DbfidxScopeL0Assign 298
# define DbfidxScopeAccess 142
# define DbfidxScopeAssign 143
# define DbfidxSeekL0Method 299
# define DbfidxSeekMethod 144
# define DbfidxSeekevalL0Method 300
# define DbfidxSeekevalMethod 145
# define DbfidxSetdatafieldMethod 146
# define DbfidxSetfilterL0Method 301
# define DbfidxSetfilterMethod 147
# define DbfidxSetfoundL0Assign 302
# define DbfidxSetfoundAssign 148
# define DbfidxSetindexL0Method 303
# define DbfidxSetindexMethod 149
# define DbfidxSetlocateL0Assign 304
# define DbfidxSetlocateAssign 150
# define DbfidxSetorderL0Method 305
# define DbfidxSetorderMethod 151
# define DbfidxSetorderconditionL0Method 306
# define DbfidxSetorderconditionMethod 152
# define DbfidxSetrelationL0Method 307
# define DbfidxSetrelationMethod 153
# define DbfidxSetselectiverelatMethod 154
# define DbfidxSharedL0Access 308
# define DbfidxSharedAccess 155
# define DbfidxSkipL0Method 309
# define DbfidxSkipMethod 156
# define DbfidxSortL0Method 310
# define DbfidxSortMethod 157
# define DbfidxStatusL0Access 311
# define DbfidxStatusAccess 158
# define DbfidxSumL0Method 312
# define DbfidxSumMethod 159
# define DbfidxSuspendnotificationMethod 160
# define DbfidxTaskL0Method 313
# define DbfidxTaskMethod 161
# define DbfidxTotalL0Method 314
# define DbfidxTotalMethod 162
# define DbfidxUnlockL0Method 315
# define DbfidxUnlockMethod 163
# define DbfidxUnregisterclientMethod 164
# define DbfidxUpdateL0Method 316
# define DbfidxUpdateMethod 165
# define DbfidxUsedL0Access 317
# define DbfidxUsedAccess 166
# define DbfidxUsersdbfL0Method 318
# define DbfidxUsersdbfMethod 167
# define DbfidxWhileblockL0Access 319
# define DbfidxWhileblockL0Assign 320
# define DbfidxWhileblockAccess 168
# define DbfidxWhileblockAssign 169
# define DbfidxZapL0Method 321
# define DbfidxZapMethod 170
# define DbfidxActaskProtect 44
# define DbfidxAliasInstance 2
# define DbfidxAliassymInstance 3
# define DbfidxBdoneProtect 45
# define DbfidxBevalProtect 46
# define DbfidxBofProtect 47
# define DbfidxBofInstance 4
# define DbfidxBstartProtect 48
# define DbfidxCargoInstance 5
# define DbfidxConcurrencInstance 6
# define DbfidxDeletedInstance 7
# define DbfidxDriverInstance 8
# define DbfidxEofProtect 49
# define DbfidxEofInstance 9
# define DbfidxErrinfoInstance 10
# define DbfidxErrorProtect 50
# define DbfidxFcountInstance 11
# define DbfidxFilespecInstance 12
# define DbfidxFilterInstance 13
# define DbfidxForblockInstance 14
# define DbfidxFoundInstance 15
# define DbfidxGetlocateInstance 16
# define DbfidxHeaderInstance 17
# define DbfidxIndexcheckInstance 18
# define DbfidxIndexcountProtect 51
# define DbfidxIndexcountInstance 19
# define DbfidxIndexextInstance 20
# define DbfidxIndexkeyInstance 21
# define DbfidxIndexlockInstance 22
# define DbfidxIsrelationInstance 23
# define DbfidxLastrecProtect 52
# define DbfidxLastrecInstance 24
# define DbfidxLupdateInstance 25
# define DbfidxNameInstance 26
# define DbfidxOrderbottoInstance 27
# define DbfidxOrderkeynoInstance 28
# define DbfidxOrderkeyvaInstance 29
# define DbfidxOrdernumProtect 53
# define DbfidxOrdertopscInstance 30
# define DbfidxRddnameInstance 31
# define DbfidxReadonlyInstance 32
# define DbfidxReccountInstance 33
# define DbfidxRecnoProtect 54
# define DbfidxRecnoInstance 34
# define DbfidxRecsizeInstance 35
# define DbfidxReservedHidden 55
# define DbfidxRlocklistInstance 36
# define DbfidxScopeInstance 37
# define DbfidxSetfoundInstance 38
# define DbfidxSetlocateInstance 39
# define DbfidxSharedInstance 40
# define DbfidxStatusInstance 41
# define DbfidxUsedInstance 42
# define DbfidxUserabortProtect 56
# define DbfidxWhileblockInstance 43
extern FSvar *_bb_start FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_readclearg FGS_ANSI((FSint, FSvar *[]));
static FSaddrval _fsali_kartneu;
static FSaddrval _fsali_kartei;


static FSaddrval _bbvar_nil;
static FSaddrval _bbvar_pointer;
static FSaddrval _bbvar_pnr;
static FSaddrval _bbvar_elemente;
static FSaddrval _bbvar_datetime;
static FSaddrval _bbvar___subscarr;
static FSaddrval _bbvar_gesperrt;
static FSaddrval _bbvar_getlist;
static FSaddrval _bbvar_ckrit;

static FSvar *_bb_cb_1_19_31(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_1_19_31",19,parno,parptr);

	FSvar *par0[3], *par1[6];
	FSvar *_fgspvar_get = 0;
	if(fgsDonotenter) init_ref_data();
	_fgspvar_get = fgs_local_param(parno, 0, parptr, 'U', "");
	par1[0] = _fgspvar_get;
	par1[1] = set_Iv((int) 4);
	par1[2] = set_cv("destroy");
	par1[3] = _bb_isobjprope(3, &par1[0]);
 if(if_u(par1[3])) {
par1[4] = _fgspvar_get;
	par1[5] = fgsNoDoMethod("destroy", 0, 1, &par1[4]);
	par0[1] = par1[5];
	par0[0] = par0[1];
 } else {
	par0[2] = fgsGetVar(_bbvar_nil);
	par0[0] = par0[2];
 }
	fn_stk.rvalptr = par0[0];
_adios:
	return fgs_fn_end(&fn_stk, 'U', "");
}


static FSvar *_bb_cb_1_31_31(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_1_31_31",31,parno,parptr);

	FSvar *par0[3], *par1[6];
	FSvar *_fgspvar_get = 0;
	if(fgsDonotenter) init_ref_data();
	_fgspvar_get = fgs_local_param(parno, 0, parptr, 'U', "");
	par1[0] = _fgspvar_get;
	par1[1] = set_Iv((int) 4);
	par1[2] = set_cv("destroy");
	par1[3] = _bb_isobjprope(3, &par1[0]);
 if(if_u(par1[3])) {
par1[4] = _fgspvar_get;
	par1[5] = fgsNoDoMethod("destroy", 0, 1, &par1[4]);
	par0[1] = par1[5];
	par0[0] = par0[1];
 } else {
	par0[2] = fgsGetVar(_bbvar_nil);
	par0[0] = par0[2];
 }
	fn_stk.rvalptr = par0[0];
_adios:
	return fgs_fn_end(&fn_stk, 'U', "");
}


static FSvar *_bb_cb_1_32_31(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_1_32_31",32,parno,parptr);

	FSvar *par0[3], *par1[2];
	FSvar *_fgspvar__1 = 0;
	if(fgsDonotenter) init_ref_data();
	_fgspvar__1 = fgs_local_param(parno, 0, parptr, 'U', "");
	par1[0] = u_eequ_u(_fgspvar__1, fgsGetVar(_bbvar_nil));
 if(if_u(par1[0])) {
	par0[1] = fgsGetVar(_bbvar_ckrit);
	par0[0] = par0[1];
 } else {
	par1[1] = cpy_var  (mv_names[_bbvar_ckrit].v, _fgspvar__1);
	par0[2] = par1[1];
	par0[0] = par0[2];
 }
	fn_stk.rvalptr = par0[0];
_adios:
	return fgs_fn_end(&fn_stk, 'U', "");
}


static FSvar *_bb_cb_2_32_31(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_2_32_31",32,parno,parptr);

	FSvar *_fgspvar__1 = 0;
	if(fgsDonotenter) init_ref_data();
	_fgspvar__1 = fgs_local_param(parno, 0, parptr, 'U', "");
	fn_stk.rvalptr = TRUE_VAR;
_adios:
	return fgs_fn_end(&fn_stk, 'U', "");
}


static FSvar *_bb_cb_1_65_31(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_1_65_31",65,parno,parptr);

	FSvar *par0[3], *par1[6];
	FSvar *_fgspvar_get = 0;
	if(fgsDonotenter) init_ref_data();
	_fgspvar_get = fgs_local_param(parno, 0, parptr, 'U', "");
	par1[0] = _fgspvar_get;
	par1[1] = set_Iv((int) 4);
	par1[2] = set_cv("destroy");
	par1[3] = _bb_isobjprope(3, &par1[0]);
 if(if_u(par1[3])) {
par1[4] = _fgspvar_get;
	par1[5] = fgsNoDoMethod("destroy", 0, 1, &par1[4]);
	par0[1] = par1[5];
	par0[0] = par0[1];
 } else {
	par0[2] = fgsGetVar(_bbvar_nil);
	par0[0] = par0[2];
 }
	fn_stk.rvalptr = par0[0];
_adios:
	return fgs_fn_end(&fn_stk, 'U', "");
}


/* *  For FlagShip 7..8  */
/* *  Copyright (c) 1994..2017 by multisoft Datentechnik, Germany */
/* *  You may modify this source according to your needs and distribute the */
/* *  object code freely with your executable. You may distribute also the */
/* *  modified source code when your application is distributed in source, */
/* *  but may not remove the copyright notice. */
/* *   */
FSvar *_bb_blobcopy() { return FALSE_VAR; }

FSvar * _bb_start (parno, parptr)
FSint   parno;
FSvar * parptr[];
{
	fn_stack fn_stk;
	FSchar *__who_me=fgs_fn_start(&fn_stk,fgs_file_name,"start",11,parno,parptr);

	FSvar *par0[28], *par1[16], *par2[30];
	FSvar *_fgspvar_bnodeleted = 0;
	FSvar *_fgslvar_akartei = fgs_local_param(0, 0, (FSvar**)0, 'U', "");
	FSvar *_fgslvar_nhandle = fgs_local_param(0, 0, (FSvar**)0, 'U', "");
	FSvar *_fgslvar_cbuffer = fgs_local_param(0, 0, (FSvar**)0, 'U', "");
	FSvar *_fgslvar_aneukartei = fgs_local_param(0, 0, (FSvar**)0, 'U', "");
	FSvar *_fgslvar_crlf = fgs_local_param(0, 0, (FSvar**)0, 'U', "");
	FSvar *_fgslvar_i = fgs_local_param(0, 0, (FSvar**)0, 'U', "");
	if(fgsDonotenter) init_ref_data();
	_fgspvar_bnodeleted = fgs_local_param(parno, 0, parptr, 'U', "");
	_fgs_check_event(13,1,100);
#line 13 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	cpy_var(_fgslvar_akartei, par0[1]);
	_fgs_check_event(14,1,100);
#line 14 "blobcopy.prg"
	cpy_var(_fgslvar_nhandle, set_Iv((int) 0));
	_fgs_check_event(15,1,100);
#line 15 "blobcopy.prg"
	cpy_var(_fgslvar_cbuffer, set_cv(""));
	_fgs_check_event(16,1,100);
#line 16 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	cpy_var(_fgslvar_aneukartei, par0[1]);
	_fgs_check_event(17,1,100);
#line 17 "blobcopy.prg"
	par0[0] = set_Iv((int) 10);
	par0[1] = _bb_chr(1, &par0[0]);
	par0[2] = set_Iv((int) 13);
	par0[3] = _bb_chr(1, &par0[2]);
	par0[4] = u_add_u(par0[1], par0[3], 0);
	cpy_var(_fgslvar_crlf, par0[4]);
	_fgs_check_event(19,1,100);
#line 19 "blobcopy.prg"
	par0[0] = _bb_scroll(0, (FSvar**)0);
	_fgs_check_event(19,1,100);
#line 19 "blobcopy.prg"
	par0[0] = set_Iv((int) 0);
	par0[1] = set_Iv((int) 0);
	par0[2] = _bb_setpos(2, &par0[0]);
	_fgs_check_event(19,1,100);
#line 19 "blobcopy.prg"
	par0[0] = mk_var_cp(TRUE_VAR);
	par0[1] = _bb_readkill(1, &par0[0]);
	_fgs_check_event(19,1,100);
#line 19 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_getlist);
	par1[0] = set_bvar(cre_tmpvar(), _bb_cb_1_19_31, 0, (FSvar *)0);
	par0[1] = par1[0];
	par0[2] = _bb_aeval(2, &par0[0]);
	_fgs_check_event(19,1,100);
#line 19 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_getlist].v, par0[1]);
	_fgs_check_event(24,1,100);
#line 24 "blobcopy.prg"
	par0[0] = u_equ_u(_fgspvar_bnodeleted, fgsGetVar(_bbvar_nil));
	if(!if_u(par0[0])) 
		goto lbelse0;
	_fgs_check_event(25,1,100);
#line 25 "blobcopy.prg"
	par0[0] = set_lvar (_fgspvar_bnodeleted, 0);

	goto lbendif0;
lbelse0: ;
	_fgs_check_event(27,1,100);
#line 27 "blobcopy.prg"
	par0[0] = set_lvar (_fgspvar_bnodeleted, 1);

lbendif0: ;
	_fgs_check_event(30,1,100);
#line 30 "blobcopy.prg"
	par0[0] = set_Iv((int) 200);
	par0[1] = _bb_space(1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_ckrit].v, par0[1]);
	_fgs_check_event(31,1,100);
#line 31 "blobcopy.prg"
	par0[0] = _bb_scroll(0, (FSvar**)0);
	_fgs_check_event(31,1,100);
#line 31 "blobcopy.prg"
	par0[0] = set_Iv((int) 0);
	par0[1] = set_Iv((int) 0);
	par0[2] = _bb_setpos(2, &par0[0]);
	_fgs_check_event(31,1,100);
#line 31 "blobcopy.prg"
	par0[0] = mk_var_cp(TRUE_VAR);
	par0[1] = _bb_readkill(1, &par0[0]);
	_fgs_check_event(31,1,100);
#line 31 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_getlist);
	par1[0] = set_bvar(cre_tmpvar(), _bb_cb_1_31_31, 0, (FSvar *)0);
	par0[1] = par1[0];
	par0[2] = _bb_aeval(2, &par0[0]);
	_fgs_check_event(31,1,100);
#line 31 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_getlist].v, par0[1]);
	_fgs_check_event(32,1,100);
#line 32 "blobcopy.prg"
	par0[0] = set_Iv((int) 1);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(32,1,100);
#line 32 "blobcopy.prg"
	par0[0] = set_cv("Kriterien: ");
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(32,1,100);
#line 32 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_getlist);
	par2[0] = _bb_row(0, (FSvar**)0);
	par1[0] = par2[0];
	par2[1] = _bb_col(0, (FSvar**)0);
	par2[2] = n_add_u(1.0, 0, par2[1], 0);
	par1[1] = par2[2];
	par1[2] = set_cv("cKrit");
	par2[3] = set_bvar(cre_tmpvar(), _bb_cb_1_32_31, 0, (FSvar *)0);
	par1[3] = par2[3];
	par1[4] = cre_tmpvar();
	par2[4] = set_bvar(cre_tmpvar(), _bb_cb_2_32_31, 0, (FSvar *)0);
	par1[5] = par2[4];
	par1[6] = cre_tmpvar();
	par1[7] = cre_tmpvar();
	par2[5] = cre_tmpvar();
	par2[6] = mk_var_cp(FALSE_VAR);
	par2[7] = mk_var_cp(FALSE_VAR);
	par2[8] = _bb__stdunitpi(3, &par2[5]);
	par1[8] = mk_var_cp(par2[8]);
	par1[9] = cre_tmpvar();
	par1[10] = set_Iv((int) 1);
	par1[11] = set_cv("Kriterien: ");
	par1[12] = cre_tmpvar();
	par1[13] = cre_tmpvar();
	par1[14] = mk_var_cp(FALSE_VAR);
	par1[15] = _bb__fsget_(15, &par1[0]);
	par0[1] = par1[15];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_check_event(32,1,100);
#line 32 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_getlist);
	par0[1] = _bb_atail(1, &par0[0]);
par0[2] = par0[1];
	par0[3] = fgsNoDoMethod("display", 0, 1, &par0[2]);
	_fgs_check_event(33,1,100);
#line 33 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_getlist);
	par0[1] = mk_var_cp(FALSE_VAR);
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = cre_tmpvar();
	par0[6] = cre_tmpvar();
	par0[7] = cre_tmpvar();
	par0[8] = _bb_readmodal(8, &par0[0]);
	_fgs_check_event(33,1,100);
#line 33 "blobcopy.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_getlist));
	par0[1] = mk_var_cp(FALSE_VAR);
	par0[2] = _bb_readclearg(2, &par0[0]);
	_fgs_check_event(33,1,100);
#line 33 "blobcopy.prg"
	par1[0] = _bb_readsave(0, (FSvar**)0);
	par1[1] = par1[0];
	if(!if_u(par1[1])) goto lband1;
lband1:;
 if(if_u(par1[1])) {
	par0[1] = fgsGetVar(_bbvar_nil);
	par0[0] = par0[1];
 } else {
	par1[2] = cre_tmpvar();
	par1[3] = cre_arra(cre_tmpvar(), 0, 1, &par1[2]);
	par1[4] = cpy_var  (mv_names[_bbvar_getlist].v, par1[3]);
	par0[2] = par1[4];
	par0[0] = par0[2];
 }
	_fgs_check_event(36,1,100);
#line 36 "blobcopy.prg"
	par0[0] = set_Iv((int) 1);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(36,1,100);
#line 36 "blobcopy.prg"
	par0[0] = set_cv("Sicherungsdatei f\303\274r Karteikartei wird neu erzeugt ...");
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(37,1,100);
#line 37 "blobcopy.prg"
	par0[0] = set_cv("kartneu");
	par2[0] = set_cv("pnr");
	par2[1] = set_cv("n");
	par2[2] = set_Iv((int) 10);
	par2[3] = set_Iv((int) 0);
	par2[4] = cre_arra(cre_tmpvar(), 4, 1, &par2[0]);
	par1[0] = par2[4];
	par2[5] = set_cv("datetime");
	par2[6] = set_cv("c");
	par2[7] = set_Iv((int) 15);
	par2[8] = set_Iv((int) 0);
	par2[9] = cre_arra(cre_tmpvar(), 4, 1, &par2[5]);
	par1[1] = par2[9];
	par2[10] = set_cv("gesperrt");
	par2[11] = set_cv("l");
	par2[12] = set_Iv((int) 1);
	par2[13] = set_Iv((int) 0);
	par2[14] = cre_arra(cre_tmpvar(), 4, 1, &par2[10]);
	par1[2] = par2[14];
	par2[15] = set_cv("elemente");
	par2[16] = set_cv("n");
	par2[17] = set_Iv((int) 6);
	par2[18] = set_Iv((int) 0);
	par2[19] = cre_arra(cre_tmpvar(), 4, 1, &par2[15]);
	par1[3] = par2[19];
	par2[20] = set_cv("pointer");
	par2[21] = set_cv("n");
	par2[22] = set_Iv((int) 10);
	par2[23] = set_Iv((int) 0);
	par2[24] = cre_arra(cre_tmpvar(), 4, 1, &par2[20]);
	par1[4] = par2[24];
	par2[25] = set_cv("memodummy");
	par2[26] = set_cv("m");
	par2[27] = set_Iv((int) 10);
	par2[28] = set_Iv((int) 0);
	par2[29] = cre_arra(cre_tmpvar(), 4, 1, &par2[25]);
	par1[5] = par2[29];
	par1[6] = cre_arra(cre_tmpvar(), 6, 1, &par1[0]);
	par0[1] = par1[6];
	par0[2] = _bb_dbcreate(2, &par0[0]);
	_fgs_check_event(45,1,100);
#line 45 "blobcopy.prg"
	par0[0] = set_Iv((int) 1);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(45,1,100);
#line 45 "blobcopy.prg"
	par0[0] = set_cv("Fehlerprotokoll in KARTEI.ERR!");
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(46,1,100);
#line 46 "blobcopy.prg"
	par0[0] = set_Iv((int) 3);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(46,1,100);
#line 46 "blobcopy.prg"
	par0[0] = set_cv("Datenbank KARTNEU fuer Karteikartei wurde neu erzeugt, weiter mit <RETURN>");
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(47,1,100);
#line 47 "blobcopy.prg"
	par0[0] = set_Iv((int) 0);
	par0[1] = _bb_inkey(1, &par0[0]);
	_fgs_check_event(49,1,100);
#line 49 "blobcopy.prg"
	if(!if_u(_fgspvar_bnodeleted)) 
		goto lbelse2;
	_fgs_check_event(50,1,100);
#line 50 "blobcopy.prg"
	par0[0] = set_Iv((int) 5);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(50,1,100);
#line 50 "blobcopy.prg"
	par0[0] = set_cv("Geloeschte werden eleminiert!");
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(51,1,100);
#line 51 "blobcopy.prg"
	par0[0] = set_Iv((int) 0);
	par0[1] = _bb_inkey(1, &par0[0]);

	goto lbendif2;
lbelse2: ;


lbendif2: ;
	_fgs_check_event(54,1,100);
#line 54 "blobcopy.prg"
	par0[0] = set_cv("kartei.err");
	par0[1] = set_Iv((int) 0);
	par0[2] = _bb_fcreate(2, &par0[0]);
	par0[3] = cpy_var  (_fgslvar_nhandle, par0[2]);
	_fgs_check_event(56,1,100);
#line 56 "blobcopy.prg"
	par0[0] = ni_geq_u((int) 0, _fgslvar_nhandle);
	if(!if_u(par0[0])) 
		goto lbelse3;
	_fgs_check_event(57,1,100);
#line 57 "blobcopy.prg"
	par0[0] = set_Iv((int) 10);
	par0[1] = set_Iv((int) 10);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(57,1,100);
#line 57 "blobcopy.prg"
	par2[0] = _bb_ferror(0, (FSvar**)0);
	par1[0] = par2[0];
	par1[1] = set_Iv((int) 2);
	par1[2] = set_Iv((int) 0);
	par1[3] = _bb_str(3, &par1[0]);
	par1[4] = c_add_u("Fehler beim Anlegen der KARTEI.ERR ", par1[3]);
	par0[0] = par1[4];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(58,1,100);
#line 58 "blobcopy.prg"
	par0[0] = _bb___quit(0, (FSvar**)0);

	goto lbendif3;
lbelse3: ;


lbendif3: ;
	_fgs_check_event(61,1,100);
#line 61 "blobcopy.prg"
	par0[0] = mk_var_cp(TRUE_VAR);
	par0[1] = mk_var_cp(fgsGetVar(_bbvar_nil));
	par0[2] = set_cv("kartneu");
	par0[3] = cre_tmpvar();
	par0[4] = _bb_dbusearea(4, &par0[0]);
	_fgs_check_event(61,1,100);
#line 61 "blobcopy.prg"
	par0[0] = _bb_used(0, (FSvar**)0);
	par0[1] = par0[0];
	if(!if_u(par0[1])) goto lband4;
	par0[2] = set_Iv((int) 87);
	par0[3] = _bb_set(1, &par0[2]);
	par0[1] = par0[3];
lband4:;
	if(!if_u(par0[1])) 
		goto lbelse5;
	_fgs_check_event(61,1,100);
#line 61 "blobcopy.prg"
	par0[0] = _bb_dbgotop(0, (FSvar**)0);

	goto lbendif5;
lbelse5: ;


lbendif5: ;
	_fgs_check_event(61,1,100);
#line 61 "blobcopy.prg"
	par0[0] = _bb_used(0, (FSvar**)0);
	_fgs_check_event(63,1,100);
#line 63 "blobcopy.prg"
	par0[0] = mk_var_cp(TRUE_VAR);
	par0[1] = mk_var_cp(fgsGetVar(_bbvar_nil));
	par0[2] = set_cv("kartei");
	par0[3] = cre_tmpvar();
	par0[4] = _bb_dbusearea(4, &par0[0]);
	_fgs_check_event(63,1,100);
#line 63 "blobcopy.prg"
	par0[0] = _bb_used(0, (FSvar**)0);
	par0[1] = par0[0];
	if(!if_u(par0[1])) goto lband6;
	par0[2] = set_Iv((int) 87);
	par0[3] = _bb_set(1, &par0[2]);
	par0[1] = par0[3];
lband6:;
	if(!if_u(par0[1])) 
		goto lbelse7;
	_fgs_check_event(63,1,100);
#line 63 "blobcopy.prg"
	par0[0] = _bb_dbgotop(0, (FSvar**)0);

	goto lbendif7;
lbelse7: ;


lbendif7: ;
	_fgs_check_event(63,1,100);
#line 63 "blobcopy.prg"
	par0[0] = _bb_used(0, (FSvar**)0);
	_fgs_check_event(64,1,100);
#line 64 "blobcopy.prg"
	par0[0] = _bb_dbgotop(0, (FSvar**)0);
	_fgs_check_event(65,1,100);
#line 65 "blobcopy.prg"
	par0[0] = _bb_scroll(0, (FSvar**)0);
	_fgs_check_event(65,1,100);
#line 65 "blobcopy.prg"
	par0[0] = set_Iv((int) 0);
	par0[1] = set_Iv((int) 0);
	par0[2] = _bb_setpos(2, &par0[0]);
	_fgs_check_event(65,1,100);
#line 65 "blobcopy.prg"
	par0[0] = mk_var_cp(TRUE_VAR);
	par0[1] = _bb_readkill(1, &par0[0]);
	_fgs_check_event(65,1,100);
#line 65 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_getlist);
	par1[0] = set_bvar(cre_tmpvar(), _bb_cb_1_65_31, 0, (FSvar *)0);
	par0[1] = par1[0];
	par0[2] = _bb_aeval(2, &par0[0]);
	_fgs_check_event(65,1,100);
#line 65 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_getlist].v, par0[1]);
	_fgs_check_event(66,1,100);
#line 66 "blobcopy.prg"
	par0[0] = set_Iv((int) 1);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(66,1,100);
#line 66 "blobcopy.prg"
	par2[0] = _bb_lastrec(0, (FSvar**)0);
	par1[0] = par2[0];
	par1[1] = _bb_str(1, &par1[0]);
	par1[2] = c_add_u("Anzahl Saetze   ", par1[1]);
	par0[0] = par1[2];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(67,1,100);
#line 67 "blobcopy.prg"
	par0[0] = set_Iv((int) 2);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(67,1,100);
#line 67 "blobcopy.prg"
	par0[0] = set_cv("akt. Datensatz ");
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(68,1,100);
#line 68 "blobcopy.prg"
 while(1) {
	del_tmpvars(fn_stk.tmv_now);
	par0[0] = _bb_eof(0, (FSvar**)0);
	par0[1] = not_u(par0[0]);
	_fgs_check_event(68,1,100);
#line 68 "blobcopy.prg"
	if(!if_u(par0[1])) break;
	_fgs_check_event(70,1,100);
#line 70 "blobcopy.prg"
	par0[0] = set_Iv((int) 2);
	par0[1] = set_Iv((int) 16);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(70,1,100);
#line 70 "blobcopy.prg"
	par1[0] = _bb_recno(0, (FSvar**)0);
	par0[0] = par1[0];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(71,1,100);
#line 71 "blobcopy.prg"
	par0[0] = _bb_deleted(0, (FSvar**)0);
	par0[1] = par0[0];
	if(!if_u(par0[1])) goto lband8;
	par0[1] = _fgspvar_bnodeleted;
lband8:;
	if(!if_u(par0[1])) 
		goto lbelse9;
	_fgs_check_event(72,1,100);
#line 72 "blobcopy.prg"
	par0[0] = set_Iv((int) 2);
	par0[1] = set_Iv((int) 30);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(72,1,100);
#line 72 "blobcopy.prg"
	par1[0] = _bb_recno(0, (FSvar**)0);
	par0[0] = par1[0];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(73,1,100);
#line 73 "blobcopy.prg"
	par0[0] = _bb_dbskip(0, (FSvar**)0);
	_fgs_check_event(74,1,100);
#line 74 "blobcopy.prg"
continue;
lbloop10: ;

	goto lbendif9;
lbelse9: ;


lbendif9: ;
	_fgs_check_event(76,1,100);
#line 76 "blobcopy.prg"
	par0[0] = fgsGetVar(_bbvar_ckrit);
	par0[1] = _bb_empty(1, &par0[0]);
	par0[2] = not_u(par0[1]);
	if(!if_u(par0[2])) 
		goto lbelse11;
	_fgs_check_event(77,1,100);
#line 77 "blobcopy.prg"
	par0[0] = not_u(exp_eval(fgs_chararg(mv_names[_bbvar_ckrit].v, "&ckrit")));
	if(!if_u(par0[0])) 
		goto lbelse12;
	_fgs_check_event(78,1,100);
#line 78 "blobcopy.prg"
	par0[0] = _bb_dbskip(0, (FSvar**)0);
	_fgs_check_event(79,1,100);
#line 79 "blobcopy.prg"
continue;
lbloop13: ;

	goto lbendif12;
lbelse12: ;


lbendif12: ;

	goto lbendif11;
lbelse11: ;


lbendif11: ;
	_fgs_check_event(82,1,100);
#line 82 "blobcopy.prg"
	par0[0] = (FSvar *)fgsPushIArea(_fsali_kartneu);
	par0[1] = _bb_dbappend(0, (FSvar**)0);
	par0[2] = par0[1];
fgsPopArea((fgsWorkArea *) par0[0]);
	_fgs_check_event(83,1,100);
#line 83 "blobcopy.prg"
	par0[0] = cpy_var  (_fgslvar_akartei, fgsGetIAliasField(_fsali_kartei, _bbvar_pointer));
	_fgs_check_event(84,1,100);
#line 84 "blobcopy.prg"
	par0[0] = set_Iv((int) 3);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(84,1,100);
#line 84 "blobcopy.prg"
	par1[0] = _fgslvar_akartei;
	par1[1] = _bb_valtype(1, &par1[0]);
	par0[0] = par1[1];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);
	_fgs_check_event(85,1,100);
#line 85 "blobcopy.prg"
	par0[0] = _fgslvar_akartei;
	par0[1] = _bb_valtype(1, &par0[0]);
	par0[2] = u_in_c(par0[1], "AC");
	if(!if_u(par0[2])) 
		goto lbelse14;
	_fgs_check_event(86,1,100);
#line 86 "blobcopy.prg"
	par0[0] = set_Iv((int) 4);
	par0[1] = set_Iv((int) 1);
	par1[0] = cre_tmpvar();
	par1[1] = mk_var_cp(FALSE_VAR);
	par1[2] = mk_var_cp(FALSE_VAR);
	par1[3] = _bb__stdunitpi(3, &par1[0]);
	par0[2] = mk_var_cp(par1[3]);
	par0[3] = _bb_devpos(3, &par0[0]);
	_fgs_check_event(86,1,100);
#line 86 "blobcopy.prg"
	par1[0] = _fgslvar_akartei;
	par1[1] = _bb_len(1, &par1[0]);
	par0[0] = par1[1];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = cre_tmpvar();
	par0[5] = _bb_devout(5, &par0[0]);

	goto lbendif14;
lbelse14: ;


lbendif14: ;
	_fgs_check_event(90,1,100);
#line 90 "blobcopy.prg"
	par2[0] = _bb_lastkey(0, (FSvar**)0);
	par1[0] = par2[0];
	par1[1] = _bb_chr(1, &par1[0]);
	par0[0] = par1[1];
	par0[1] = _bb_upper(1, &par0[0]);
	par0[2] = u_equ_c(par0[1], "D");
	par0[3] = par0[2];
	if(if_u(par0[3])) goto lbor15;
	par0[4] = _fgslvar_akartei;
	par0[5] = _bb_valtype(1, &par0[4]);
	par0[6] = u_in_c(par0[5], "A");
	par0[7] = not_u(par0[6]);
	par0[3] = par0[7];
lbor15:;
	if(!if_u(par0[3])) 
		goto lbelse16;
	_fgs_check_event(92,1,100);
#line 92 "blobcopy.prg"
	par1[0] = set_Iv((int) 1);
	par1[1] = _bb_chr(1, &par1[0]);
	par0[0] = par1[1];
	par0[1] = mk_var_cp(FALSE_VAR);
	par0[2] = _bb___keyboard(2, &par0[0]);
	_fgs_check_event(93,1,100);
#line 93 "blobcopy.prg"
	par0[0] = _bb_inkey(0, (FSvar**)0);
	_fgs_check_event(95,1,100);
#line 95 "blobcopy.prg"
	par1[0] = _bb_recno(0, (FSvar**)0);
	par0[0] = par1[0];
	par0[1] = set_Iv((int) 5);
	par0[2] = set_Iv((int) 0);
	par0[3] = _bb_str(3, &par0[0]);
	par0[4] = u_add_c(par0[3], " : ", 0);
	par0[5] = fgsGetIAliasField(_fsali_kartei, _bbvar_pnr);
	par0[6] = set_Iv((int) 10);
	par0[7] = set_Iv((int) 0);
	par0[8] = _bb_str(3, &par0[5]);
	par0[9] = u_add_u(par0[4], par0[8], 0);
	par0[10] = u_add_c(par0[9], " : ", 0);
	par0[11] = fgsGetIAliasField(_fsali_kartei, _bbvar_elemente);
	par0[12] = set_Iv((int) 5);
	par0[13] = set_Iv((int) 0);
	par0[14] = _bb_str(3, &par0[11]);
	par0[15] = u_add_u(par0[10], par0[14], 0);
	par0[16] = u_add_c(par0[15], " : ", 0);
	par0[17] = u_add_u(par0[16], fgsGetIAliasField(_fsali_kartei, _bbvar_datetime), 0);
	par0[18] = u_add_c(par0[17], " : ", 0);
	par0[19] = _fgslvar_akartei;
	par0[20] = _bb_valtype(1, &par0[19]);
	par0[21] = u_add_u(par0[18], par0[20], 0);
	par0[22] = u_add_c(par0[21], " : ", 0);
	par1[1] = _fgslvar_akartei;
	par1[2] = _bb_valtype(1, &par1[1]);
	par1[3] = u_equ_c(par1[2], "A");
 if(if_u(par1[3])) {
	par2[0] = _fgslvar_akartei;
	par2[1] = _bb_len(1, &par2[0]);
	par1[4] = par2[1];
	par1[5] = set_Iv((int) 5);
	par1[6] = set_Iv((int) 0);
	par1[7] = _bb_str(3, &par1[4]);
	par0[24] = par1[7];
	par0[23] = par0[24];
 } else {
	par0[25] = set_cv(" - ");
	par0[23] = par0[25];
 }
	par0[26] = u_add_u(par0[22], par0[23], 0);
	par0[27] = cpy_var  (_fgslvar_cbuffer, par0[26]);
	_fgs_check_event(102,1,100);
#line 102 "blobcopy.prg"
	par0[0] = _fgslvar_nhandle;
	par1[0] = u_add_u(_fgslvar_cbuffer, _fgslvar_crlf, 0);
	par0[1] = mk_var_cp(par1[0]);
	par1[1] = _fgslvar_cbuffer;
	par1[2] = _bb_len(1, &par1[1]);
	par1[3] = n_add_u(2.0, 0, par1[2], 0);
	par0[2] = par1[3];
	par0[3] = _bb_fwrite(3, &par0[0]);
	_fgs_check_event(104,1,100);
#line 104 "blobcopy.prg"
	par0[0] = _fgslvar_akartei;
	par0[1] = _bb_valtype(1, &par0[0]);
	par0[2] = u_equ_c(par0[1], "A");
	if(!if_u(par0[2])) 
		goto lbelse17;
	_fgs_check_event(105,1,100);
#line 105 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (_fgslvar_aneukartei, par0[1]);
	_fgs_check_event(106,1,100);
#line 106 "blobcopy.prg"
	par0[0] = set_Ivar (_fgslvar_i, (int) 1);
	goto lbfor18;
lbinfor18:
 while(1) {
	par0[0] = u_autoinc(_fgslvar_i);
	_fgs_check_event(106,1,100);
#line 106 "blobcopy.prg"
	del_tmpvars(fn_stk.tmv_now);
lbfor18:
	par0[0] = _fgslvar_akartei;
	par0[1] = _bb_len(1, &par0[0]);
	par0[2] = u_leq_u(_fgslvar_i, par0[1]);
	if(!if_u(par0[2])) break;
	_fgs_check_event(107,1,100);
#line 107 "blobcopy.prg"
	if(fgs_subscarr)
		cre_arr(mv_names[_bbvar___subscarr].v, 0, 0, 0);
	par1[0] = dget_arrv(_fgslvar_akartei, _fgslvar_i);
	par0[0] = par1[0];
	par0[1] = _bb_valtype(1, &par0[0]);
	par0[2] = u_equ_c(par0[1], "C");
	par0[3] = par0[2];
	if(!if_u(par0[3])) goto lband19;
	if(fgs_subscarr)
		cre_arr(mv_names[_bbvar___subscarr].v, 0, 0, 0);
	par1[1] = dget_arrv(_fgslvar_akartei, _fgslvar_i);
	par0[4] = par1[1];
	par0[5] = _bb_empty(1, &par0[4]);
	par0[6] = not_u(par0[5]);
	par0[3] = par0[6];
lband19:;
	if(!if_u(par0[3])) 
		goto lbelse20;
	_fgs_check_event(108,1,100);
#line 108 "blobcopy.prg"
	par0[0] = _fgslvar_aneukartei;
	if(fgs_subscarr)
		cre_arr(mv_names[_bbvar___subscarr].v, 0, 0, 0);
	par1[0] = dget_arrv(_fgslvar_akartei, _fgslvar_i);
	par0[1] = par1[0];
	par0[2] = _bb_aadd(2, &par0[0]);

	goto lbendif20;
lbelse20: ;


lbendif20: ;
	;
 }

	del_tmpvars(fn_stk.tmv_now);

	_fgs_check_event(111,1,100);
#line 111 "blobcopy.prg"
	par0[0] = cpy_var  (_fgslvar_akartei, _fgslvar_aneukartei);
	_fgs_check_event(112,1,100);
#line 112 "blobcopy.prg"
	par0[0] = set_Iv((int) 10);
	par0[1] = _bb_space(1, &par0[0]);
	par0[2] = u_add_c(par0[1], " : ", 0);
	par0[3] = set_Iv((int) 5);
	par0[4] = _bb_space(1, &par0[3]);
	par0[5] = u_add_u(par0[2], par0[4], 0);
	par0[6] = u_add_c(par0[5], " : ", 0);
	par1[0] = _fgslvar_akartei;
	par1[1] = _bb_len(1, &par1[0]);
	par0[7] = par1[1];
	par0[8] = set_Iv((int) 5);
	par0[9] = set_Iv((int) 0);
	par0[10] = _bb_str(3, &par0[7]);
	par0[11] = u_add_u(par0[6], par0[10], 0);
	par0[12] = cpy_var  (_fgslvar_cbuffer, par0[11]);
	_fgs_check_event(115,1,100);
#line 115 "blobcopy.prg"
	par0[0] = set_Iv((int) 5);
	par0[1] = _bb_space(1, &par0[0]);
	par0[2] = u_add_c(par0[1], " : ", 0);
	par0[3] = set_Iv((int) 10);
	par0[4] = _bb_space(1, &par0[3]);
	par0[5] = u_add_u(par0[2], par0[4], 0);
	par0[6] = u_add_c(par0[5], " : ", 0);
	par0[7] = set_Iv((int) 5);
	par0[8] = _bb_space(1, &par0[7]);
	par0[9] = u_add_u(par0[6], par0[8], 0);
	par0[10] = u_add_c(par0[9], " : ", 0);
	par0[11] = u_add_u(par0[10], fgsGetIAliasField(_fsali_kartei, _bbvar_datetime), 0);
	par0[12] = u_add_c(par0[11], " : ", 0);
	par0[13] = _fgslvar_akartei;
	par0[14] = _bb_valtype(1, &par0[13]);
	par0[15] = u_add_u(par0[12], par0[14], 0);
	par0[16] = u_add_c(par0[15], " : ", 0);
	par1[0] = _fgslvar_akartei;
	par1[1] = _bb_valtype(1, &par1[0]);
	par1[2] = u_equ_c(par1[1], "A");
 if(if_u(par1[2])) {
	par2[0] = _fgslvar_akartei;
	par2[1] = _bb_len(1, &par2[0]);
	par1[3] = par2[1];
	par1[4] = set_Iv((int) 5);
	par1[5] = set_Iv((int) 0);
	par1[6] = _bb_str(3, &par1[3]);
	par0[18] = par1[6];
	par0[17] = par0[18];
 } else {
	par0[19] = set_cv(" - ");
	par0[17] = par0[19];
 }
	par0[20] = u_add_u(par0[16], par0[17], 0);
	par0[21] = cpy_var  (_fgslvar_cbuffer, par0[20]);
	_fgs_check_event(122,1,100);
#line 122 "blobcopy.prg"
	par0[0] = _fgslvar_nhandle;
	par1[0] = u_add_u(_fgslvar_cbuffer, _fgslvar_crlf, 0);
	par0[1] = mk_var_cp(par1[0]);
	par1[1] = _fgslvar_cbuffer;
	par1[2] = _bb_len(1, &par1[1]);
	par1[3] = n_add_u(2.0, 0, par1[2], 0);
	par0[2] = par1[3];
	par0[3] = _bb_fwrite(3, &par0[0]);

	goto lbendif17;
lbelse17: ;
	_fgs_check_event(124,1,100);
#line 124 "blobcopy.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (_fgslvar_akartei, par0[1]);

lbendif17: ;

	goto lbendif16;
lbelse16: ;


lbendif16: ;
	_fgs_check_event(131,1,100);
#line 131 "blobcopy.prg"
	par0[0] = u_neq_u(_fgslvar_akartei, fgsGetVar(_bbvar_nil));
	if(!if_u(par0[0])) 
		goto lbelse21;
	_fgs_check_event(132,1,100);
#line 132 "blobcopy.prg"
	par0[0] = set_cv("kartneu");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_check_event(133,1,100);
#line 133 "blobcopy.prg"
	par0[0] = _fgslvar_akartei;
	par0[1] = _bb_valtype(1, &par0[0]);
	par0[2] = c_eequ_u("A", par0[1]);
	par0[3] = par0[2];
	if(!if_u(par0[3])) goto lband22;
	par0[4] = _fgslvar_akartei;
	par0[5] = _bb_len(1, &par0[4]);
	par0[6] = ni_lt_u((int) 0, par0[5]);
	par0[3] = par0[6];
lband22:;
	if(!if_u(par0[3])) 
		goto lbelse23;
	_fgs_check_event(134,1,100);
#line 134 "blobcopy.prg"
	par0[0] = cpy_var  (fgsGetIAliasField(_fsali_kartneu, _bbvar_pointer), _fgslvar_akartei);

	goto lbendif23;
lbelse23: ;
	_fgs_check_event(136,1,100);
#line 136 "blobcopy.prg"
	par0[0] = set_Ivar (fgsGetIAliasField(_fsali_kartneu, _bbvar_pointer), (int) 0);

lbendif23: ;
	_fgs_check_event(138,1,100);
#line 138 "blobcopy.prg"
	par0[0] = cpy_var  (fgsGetIAliasField(_fsali_kartneu, _bbvar_pnr), fgsGetIAliasField(_fsali_kartei, _bbvar_pnr));
	_fgs_check_event(139,1,100);
#line 139 "blobcopy.prg"
	par0[0] = cpy_var  (fgsGetIAliasField(_fsali_kartneu, _bbvar_datetime), fgsGetIAliasField(_fsali_kartei, _bbvar_datetime));
	_fgs_check_event(140,1,100);
#line 140 "blobcopy.prg"
	par0[0] = cpy_var  (fgsGetIAliasField(_fsali_kartneu, _bbvar_gesperrt), fgsGetIAliasField(_fsali_kartei, _bbvar_gesperrt));
	_fgs_check_event(141,1,100);
#line 141 "blobcopy.prg"
	par0[0] = cpy_var  (fgsGetIAliasField(_fsali_kartneu, _bbvar_elemente), fgsGetIAliasField(_fsali_kartei, _bbvar_elemente));
	_fgs_check_event(142,1,100);
#line 142 "blobcopy.prg"
	par0[0] = set_cv("kartei");
	par0[1] = _bb_dbselectar(1, &par0[0]);

	goto lbendif21;
lbelse21: ;


lbendif21: ;
	_fgs_check_event(144,1,100);
#line 144 "blobcopy.prg"
	par0[0] = _bb_dbskip(0, (FSvar**)0);
 }

	del_tmpvars(fn_stk.tmv_now);

	_fgs_check_event(147,1,100);
#line 147 "blobcopy.prg"
	par0[0] = _fgslvar_nhandle;
	par0[1] = _bb_fclose(1, &par0[0]);
	_fgs_check_event(148,1,100);
#line 148 "blobcopy.prg"
	par0[0] = _bb_dbcloseall(0, (FSvar**)0);
	_fgs_check_event(150,1,100);
#line 150 "blobcopy.prg"
_adios:
	return fgs_fn_end(&fn_stk, 'U', "");
}



static struct f_ali_tab ali_tab[] = {
	{ "kartneu", &_fsali_kartneu },
	{ "kartei", &_fsali_kartei },
	{ "", 0 }
};

static struct g_ali_tab g_ali_tab = { "FSfntab	", ali_tab };

static FSvoid refer_to_alias()
{ 
    struct g_ali_tab *ss = &g_ali_tab;
    ss = &ss[1];
}


static f_sym_tab loc_tab[] = {
	{ "start", _bb_start },
	{ "", 0 }
};

static g_sym_tab g_loc_tab = { "FSfntab", loc_tab };

static FSvoid refer_to_func()
{ 
    g_sym_tab *ss = &g_loc_tab;
    ss = &ss[1];
}


static struct f_var_tab var_tab[] = {
	{ "nil", &_bbvar_nil },
	{ "pointer", &_bbvar_pointer },
	{ "pnr", &_bbvar_pnr },
	{ "elemente", &_bbvar_elemente },
	{ "datetime", &_bbvar_datetime },
	{ "__subscarr", &_bbvar___subscarr },
	{ "gesperrt", &_bbvar_gesperrt },
	{ "getlist", &_bbvar_getlist },
	{ "ckrit", &_bbvar_ckrit },
	{ "", &fgs_release_50 }
};

static struct g_var_tab g_var_tab = { "FSfntab", var_tab };

static FSvoid refer_to()
{ 
    struct g_var_tab *vv = &g_var_tab;
    vv = &vv[1];
}

static FSvoid init_ref_data()
{ 
	refer_to_alias();
	refer_to_func();
	refer_to();
}

