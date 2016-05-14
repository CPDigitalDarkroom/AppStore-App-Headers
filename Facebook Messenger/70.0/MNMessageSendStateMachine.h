/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageSendStateMachineAnalyticsLogging.h>

@protocol MNMessageSendStateTransitionExecuting, MNMessageSendStateMachineListening, OS_dispatch_queue;
@class MNMessageSendState, MNMessageSendStateTransition, NSObject, FBOutgoingMessage, NSString;

@interface MNMessageSendStateMachine : NSObject <MNMessageSendStateMachineAnalyticsLogging> {

	MNMessageSendState* _state;
	MNMessageSendStateTransition* _currentTransition;
	id<MNMessageSendStateTransitionExecuting> _transitionExecutor;
	id<MNMessageSendStateMachineListening> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	FBOutgoingMessage* _message;

}

@property (nonatomic,readonly) FBOutgoingMessage * message;              //@synthesize message=_message - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateMachineSendAttemptHistory;
-(id)initWithMessage:(id)arg1 initialState:(id)arg2 transitionExecutor:(id)arg3 listener:(id)arg4 queue:(id)arg5 ;
-(void)_executeCurrentTransition;
-(void)_completeCurrentTransition;
-(void)_ignoreCurrentTransition;
-(void)_continueTransitionToState:(id)arg1 ;
-(void)_failCurrentTransition;
-(NSString *)description;
-(FBOutgoingMessage *)message;
-(void)transitionToState:(id)arg1 ;
@end

