/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNTokenFieldDelegate <NSObject>
@optional
-(char)tokenField:(id)arg1 shouldAddToken:(id)arg2 atIndex:(unsigned)arg3;
-(void)tokenField:(id)arg1 didAddToken:(id)arg2 atIndex:(unsigned)arg3;
-(char)tokenField:(id)arg1 shouldRemoveToken:(id)arg2 atIndex:(unsigned)arg3;
-(void)tokenField:(id)arg1 didRemoveToken:(id)arg2 atIndex:(unsigned)arg3;
-(char)tokenFieldShouldReturnFromSelection:(id)arg1;
-(void)tokenFieldDidReturnFromSelection:(id)arg1;
-(char)tokenField:(id)arg1 shouldReturnFromEditing:(id)arg2;
-(void)tokenField:(id)arg1 didReturnFromEditing:(id)arg2;
-(void)tokenFieldWillAttemptToBecomeFirstResponder:(id)arg1;
-(void)tokenField:(id)arg1 didAttemptToBecomeFirstResponder:(char)arg2;
-(void)tokenFieldWillAttemptToResignFirstResponder:(id)arg1;
-(void)tokenField:(id)arg1 didAttemptToResignFirstResponder:(char)arg2;
-(char)tokenFieldShouldResignFirstResponder:(id)arg1;

@end

