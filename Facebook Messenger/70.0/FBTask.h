/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface FBTask : NSObject {

	id<NSObject> _result;
	NSError* _error;
	NSException* _exception;
	char _cancelled;
	char _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) NSObject * lock;                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                 //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) char completed;                          //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
+(id)taskWithError:(id)arg1 ;
+(id)cancelledTask;
+(id)taskWithResult:(id)arg1 ;
+(id)taskWithException:(id)arg1 ;
+(id)taskWithDelay:(unsigned long long)arg1 ;
+(id)taskDependentOnTasks:(id)arg1 ;
-(char)trySetResult:(id)arg1 ;
-(char)trySetError:(id)arg1 ;
-(id)dependentTaskWithBlock:(/*^block*/id)arg1 ;
-(void)runContinuations;
-(void)warnOperationOnMainThread;
-(id)completionTaskWithBlock:(/*^block*/id)arg1 ;
-(void)warnOperationOnMainThreadNoOp;
-(id)waitForResult:(id*)arg1 ;
-(char)trySetException:(id)arg1 ;
-(char)trySetCancelled;
-(id)dependentTaskWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)completionTaskWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)waitUntilFinished;
-(char)completed;
-(NSMutableArray *)callbacks;
-(id)error;
-(void)setException:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)setCompleted:(char)arg1 ;
-(char)isCompleted;
-(NSObject *)lock;
-(char)isCancelled;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
-(void)setCompleted;
-(id)exception;
-(void)setResult:(id)arg1 ;
@end

