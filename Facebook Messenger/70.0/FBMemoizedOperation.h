/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMemoizedOperation : NSObject {

	/*^block*/id _pureOperation;
	/*^block*/id _memoizationFetchBlock;
	/*^block*/id _memoizationStoreBlock;
	Class _inputType;
	Class _outputType;

}

@property (nonatomic,readonly) id pureOperation;                      //@synthesize pureOperation=_pureOperation - In the implementation block
@property (nonatomic,readonly) id memoizationFetchBlock;              //@synthesize memoizationFetchBlock=_memoizationFetchBlock - In the implementation block
@property (nonatomic,readonly) id memoizationStoreBlock;              //@synthesize memoizationStoreBlock=_memoizationStoreBlock - In the implementation block
@property (nonatomic,readonly) Class inputType;                       //@synthesize inputType=_inputType - In the implementation block
@property (nonatomic,readonly) Class outputType;                      //@synthesize outputType=_outputType - In the implementation block
-(void)valueForKey:(id)arg1 input:(id)arg2 completion:(/*^block*/id)arg3 writeCompletion:(/*^block*/id)arg4 forceUpdate:(char)arg5 ;
-(id)initWithPureOperationBlock:(/*^block*/id)arg1 memoizationFetchBlock:(/*^block*/id)arg2 memoizationStoreBlock:(/*^block*/id)arg3 inputType:(Class)arg4 outputType:(Class)arg5 ;
-(void)memoizedValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)pureOperation;
-(id)memoizationFetchBlock;
-(id)memoizationStoreBlock;
-(Class)outputType;
-(Class)inputType;
@end

