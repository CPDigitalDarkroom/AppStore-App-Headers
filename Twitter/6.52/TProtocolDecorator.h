/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TProtocol.h>

@protocol TProtocol;
@class NSString;

@interface TProtocolDecorator : NSObject <TProtocol> {

	id<TProtocol> mConcreteProtocol;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(int)readI32;
-(void)readMapEnd;
-(long long)readI64;
-(void)readFieldEnd;
-(void)readStructEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeI32:(int)arg1 ;
-(void)writeMapEnd;
-(void)writeFieldEnd;
-(void)writeI64:(long long)arg1 ;
-(void)writeFieldStop;
-(void)writeStructEnd;
-(short)readI16;
-(void)writeI16:(short)arg1 ;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(char)readBool;
-(id)readBinary;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(void)writeByte:(unsigned char)arg1 ;
-(void)writeDouble:(double)arg1 ;
-(void)writeBool:(char)arg1 ;
-(void)writeBinary:(id)arg1 ;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(void)dealloc;
-(unsigned char)readByte;
-(id)readString;
-(id)transport;
-(id)initWithProtocol:(id)arg1 ;
-(void)writeString:(id)arg1 ;
-(double)readDouble;
@end

