/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <Foundation/NSCoder.h>

@class NSData;

@interface FBMessagePackCoder : NSCoder {

	vector<FBMPCEncodingObjectContext *, std::__1::allocator<FBMPCEncodingObjectContext *> >* _encodingContextStack;
	vector<FBMPCDecodingObjectContext, std::__1::allocator<FBMPCDecodingObjectContext> >* _decodingObjectStack;
	MessagePackParseState* _decodingParseState;
	id _rootObject;
	FBMPCEncodingObjectContext* _encodingRootContext;
	unsigned _systemVersion;
	NSData* _data;

}

@property (nonatomic,copy) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)unpackObjectWithData:(id)arg1 ;
-(id)packedDataWithRootObject:(id)arg1 ;
-(id)unpackObjectWithData:(id)arg1 error:(id*)arg2 ;
-(void)willEncodeNSubobjects:(unsigned)arg1 ;
-(id)_decodeObjectForIntKey:(int)arg1 ;
-(id)_hijackDecodeForLinearSequence:(Class)arg1 ;
-(id)_decodeMsgpackObject:(msgpack_object*)arg1 ;
-(id)_decodeNewObject:(SCD_Struct_FB559*)arg1 ;
-(void)_hijackEncodeForLinearSequence:(id)arg1 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(unsigned)systemVersion;
-(void)finishEncoding;
-(int)decodeIntForKey:(id)arg1 ;
-(char)allowsKeyedCoding;
-(int)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeInteger:(int)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeDataObject;
-(void*)decodeBytesWithReturnedLength:(unsigned*)arg1 ;
-(int)versionForClassName:(id)arg1 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)_prepareForReuse;
@end

