/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class FBThreadTrace, NSString, FBServerTrace, NSDictionary;

@interface FBServerThreadNode : NSObject {

	FBThreadTrace* _threadTrace;
	/*^block*/id _timeBlock;
	char _isRoot;
	NSString* _nodeID;
	FBServerTrace* _trace;

}

@property (nonatomic,readonly) char isRoot;                                  //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeID;                       //@synthesize nodeID=_nodeID - In the implementation block
@property (nonatomic,readonly) FBServerTrace * trace;                        //@synthesize trace=_trace - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * traceResult; 
+(id)resumeFromToken:(id)arg1 ;
+(id)resumeFromRemoteToken:(id)arg1 nodeID:(id)arg2 ;
-(FBTraceEventRef)startWithIdentifier:(id)arg1 info:(id)arg2 instructionPointer:(void*)arg3 ;
-(void)stopTraceEvent:(FBTraceEventRef)arg1 instructionPointer:(void*)arg2 ;
-(id)initWithNodeID:(id)arg1 trace:(id)arg2 isRoot:(char)arg3 timeBlock:(/*^block*/id)arg4 ;
-(id)captureRemoteWithNodeID:(id)arg1 remoteNodeID:(id)arg2 description:(id)arg3 ;
-(void)addEventOfType:(int)arg1 withIdentifier:(id)arg2 withInfo:(id)arg3 withNodeID:(id)arg4 instructionPointer:(void*)arg5 ;
-(NSDictionary *)traceResult;
-(id)captureWithNodeID:(id)arg1 ;
-(id)init;
-(FBServerTrace *)trace;
-(NSString *)nodeID;
-(char)isRoot;
@end

